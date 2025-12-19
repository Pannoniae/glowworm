
	(include "/properties/cannon.ext")
	{extension "94mm_qf_3_7_aa.mdl"}
	(include "/properties/selection/vehicle.inc" scale(1.1))
	{props "94mm_qf_3_7_aa" "wheeled" "invisible" "vision_lev04_can" "muzzle_85mm_93mm" "trailer" "trailer_heavy" "detect_atgun" "c_aa_hvy"}
	{PatherID "cannon.large"}
	{targetclass "cannon_big"}
	{targetSelector "cannon_aa"}

	{sensor
		{visor "main"
			{vision "cannon_range_210"}
		}
	}

	("wheel" args "wheelright1")
	("wheel" args "wheelright2")
	("wheel" args "wheelleft1")
	("wheel" args "wheelleft2")

	("gun" repair(30) thickness(30))

	("armor_heavy_cannon")
	("crew_wheeled_cannon_6")

	{volume "fwheelleft1" {thickness 0.05}} ;// Fake wheelleft1
	{volume "fwheelright1" {thickness 0.05}} ;// Fake wheelright1

	{volume "body8" {tags "invisible"}} ;// volume disabled on carriage hidden 
	{volume "body9" {tags "invisible"}} ;// volume disabled on carriage hidden 
	{volume "body10" {tags "invisible"}} ;// volume disabled on carriage hidden 
	{volume "wheelleft1" {tags "invisible"}}
	{volume "wheelleft2" {tags "invisible"}}
	{volume "wheelright1" {tags "invisible"}}
	{volume "wheelright2" {tags "invisible"}}

	{boarder
		{anm "gunner"
			{forward {end "aagun_flak37_commander" 10}}
		}
		{anm "gunner2"
			{forward {end "aagun_72k_gunner" 10}}
		}
		{anm "charger"
			{forward {end "pose_flak_charger" 10}}
		}
		{anm "charger2"
			{forward {end "pose_flak_gunner2" 10}}
		}
		{anm "charger3"
			{forward {end "aagun_flak37_gunner" 10}}
		}
		{anm "commander"
			{forward {end "pose_flak_commander" 10}}
		}
		{anm "driver1"	;// gunner
			{forward {end "cannon_pak40_pusher_left" 10}}
		}
		{anm "driver2"	;// gunner2
			{forward {end "cannon_pak40_pusher_left" 10}}
		}
		{anm "driver3"	;// charger
			{forward {end "cannon_pak40_pusher_left" 10}}
		}
		{anm "driver4"	;// charger2
			{forward {end "cannon_pak40_pusher_right" 10}}
		}
		{anm "driver5"	;// charger3
			{forward {end "cannon_pak40_pusher_right" 10}}
		}
		{anm "driver6"	;// commander
			{forward {end "cannon_pak40_pusher_right" 10}}
		}
		{anm "seat1"	;// gunner
			{forward {end "pose_seat_cannon_right" 10}}
		}
		{anm "seat2"	;// gunner2
			{forward {end "pose_seat_cannon_right" 10}}
		}
		{anm "seat3"	;// charger
			{forward {end "pose_seat_cannon_right" 10}}
		}
		{anm "seat4"	;// charger2
			{forward {end "pose_seat_cannon_left" 10}}
		}
		{anm "seat5"	;// charger3
			{forward {end "pose_seat_cannon_left" 10}}
		}
		{anm "seat6"	;// commander
			{forward {end "pose_seat_cannon_left" 10}}
		}
	}

	{extender "cannon"
		{animation
			{switch "close"}
			;// "gunner" "gunner2" "charger" "charger2" "charger3" "commander"
			{move "cannon_pak40_pusher_left" "cannon_pak40_pusher_left" "cannon_pak40_pusher_left" "cannon_pak40_pusher_right" "cannon_pak40_pusher_right" "cannon_pak40_pusher_right"}
			{aim 	"aagun_flak37_commander_aim" "aagun_72k_gunner_aim" "flak_charger_aim" "flak_gunner2_aim" "aagun_flak37_gunner_aim" "flak_commander_aim"}
			{fire 	"aagun_flak37_commander_fire" "aagun_72k_gunner_fire" "flak_charger_fire" "flak_gunner2_fire" "aagun_flak37_gunner_fire" "flak_commander_fire"}
			{reload "" "" "flak_charger_reload" "flak_gunner2_reload" "" "flak_commander_reload"}
		}
		{move {workers "driver1" "driver2" "driver3" "driver4" "driver5" "driver6" minWorkers 2} {obstacle "close"}}		;// move state: cannon being pushed and which positions play animations
		{attack {workers "gunner" "gunner2" "charger" "charger2" "charger3" "commander"} {obstacle "open"}}	;// fire/attack state: cannon aim, fire, and reload events
		{trailing {workers "seat1" "seat2" "seat3" "seat4" "seat5" "seat6"}}								;// trailing state: cannon is being towed {obstacle} not needed. Uses "close"
		{rotate_ik_Limit 0}
	}

	{Weaponry
		("restore_ik_time")
		{place "gun"
			{RestoreIKAfterAim}
			{gunner "gunner gunner2" minWorkers 1}
			{charger "charger charger2 charger3" minWorkers 1}
			("abm_dymamic_aa"
				zeroing(2.25)
				dispersion(0.50)
			)
		}
	}

	{mass 9317}
	{Chassis "track"
		("car_trace" fx("tracewheel02") step(0.1) wheell("wlf") wheelr("wrf") bonel("FXtraceL1") boner("FXtraceR1"))
		("car_trace" fx("tracewheel02") step(0.1) wheell("wlf") wheelr("wrf") bonel("FXtraceL2") boner("FXtraceR2"))
		("car_trace" fx("tracewheel02") step(0.1) wheell("wlf") wheelr("wrf") bonel("FXtraceL3") boner("FXtraceR3"))
		("mobility_cannon"
			speed(3.6) ;-----------------------------------Max speed.
			weight(9317) ;---------------------------------Weight in Kilograms.
		)
	}

	{bone "gun_rot"
		{limits -5 80}
		{speed2 15}
	}
	{bone "turret"
		{speed2 20}
	}
