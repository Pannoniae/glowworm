	(include "/properties/cannon.ext")
	{extension "88mm_qf25_mk1_4p.mdl"}
	(include "/properties/selection/cannon_elongated.inc" scale(0.95))
	{props "88mm_qf18_25_4p" "wheeled" "vision_lev05_can" "muzzle_85mm_93mm" "cannon_sandbag_standard" "trailer" "trailer_medium" "detect_artillery" "indirect_minimap_medium" "c_gun_med"}
	{PatherId "cannon.medium"}
	{targetclass "howitzer"}
	{targetSelector "cannon_howitzer"}

	("wheel" args "wheelright")
	("wheel" args "wheelleft")
	("shield" args "shield1" 8 "shield")
	("shield" args "shield2" 8 "shield")
	("shield" args "shield3" 8 "shield")
	("shield" args "shield4" 8 "shield")
	("shield" args "shield5" 8 "shield")
	("shield" args "shield6" 8 "shield")
	("shield" args "shield7" 8 "shield")
	("shield" args "shield8" 8 "shield")
	("shield" args "shield9" 8 "shield")
	("shield" args "shield10" 8 "shield")

	("gun" repair(30) thickness(30))

	{volume "body3" {able {holed}}}
	{volume "shield1" {able {holed}}}
	{volume "shield2" {able {holed}}}
	{volume "shield3" {able {holed}}}
	{volume "shield4" {able {holed}}}
	{volume "shield5" {able {holed}}}
	{volume "shield6" {able {holed}}}
	{volume "shield7" {able {holed}}}
	{volume "shield8" {able {holed}}}

	("armor_heavy_cannon")
	("crew_wheeled_cannon_4")

	{boarder
		{anm "gunner"
			{forward {end "seat_flakvierling_charger" 10}}
		}
		{anm "charger"
			{forward {end "cannon_small_charger" 10}}
		}
		{anm "charger2"
			{forward {end "cannon_small_charger2" 10}}
		}
		{anm "commander"
			{forward {end "seat_flakvierling_commander" 10}}
		}
		{anm "driver1"	;// gunner
			{forward {end "cannon_pak40_pusher_left" 10}}
		}
		{anm "driver2"	;// charger
			{forward {end "cannon_pak40_pusher_right" 10}}
		}
		{anm "driver3"	;// charger2
			{forward {end "mortar_driver_l" 10}}
		}
		{anm "driver4"	;// commander
			{forward {end "mgun_browning_driver_r" 10}}
		}
		{anm "seat1"	;// gunner
			{forward {end "pose_seat_cannon_left" 10}}
		}
		{anm "seat2"	;// charger
			{forward {end "pose_seat_cannon_right" 10}}
		}
		{anm "seat3"	;// charger2
			{forward {end "pose_seat_cannon_right" 10}}
		}
		{anm "seat4"	;// commander
			{forward {end "pose_seat_cannon_left" 10}}
		}
	}

	{extender "cannon"
		{animation
			{switch "close"}
			;// "gunner" "charger" "charger2" "commander"
			{move "cannon_pak40_pusher_left" "cannon_pak40_pusher_right" "mortar_driver_l" "mgun_browning_driver_r" }
			{aim "" "cannon_small_charger_aim" "cannon_small_charger2_aim" ""}
			{fire "" "cannon_small_charger_fire" "cannon_small_charger2_fire" ""}
			{reload "" "cannon_small_charger_reload" "cannon_small_charger2_reload" ""}
		}
		{move {workers "driver1" "driver2" "driver3" "driver4" minWorkers 2} {obstacle "close"}}			;// move state: cannon being pushed and which positions play animations
		{attack {workers "gunner" "charger" "charger2" "commander"} {obstacle "open"}}		;// fire/attack state: cannon aim, fire, and reload events
		{trailing {workers "seat1" "seat2" "seat3" "seat4"}}								;// trailing state: cannon is being towed {obstacle} not needed. Uses "close"
	}

	{Weaponry
		("restore_ik_time")
		{place "gun"
			{charger "charger charger2" minWorkers 1}
			{RestoreIKAfterAim}
			("abm_dymamic_gun"
				zeroing(4.0)	; // time it takes to aim until the reticle shrinks. Bigger values, more control.
				dispersion(1)	; // time it takes to distort the reticle when you move the gun (how abrupt it loses zeroing). Bigger values, more control.
			)
		}
	}

	{mass 1633}
	{Chassis "track"
		("car_trace" fx("tracewheel05a") step(0.14) wheell("wlf") wheelr("wrf") bonel("FXtraceL1") boner("FXtraceR1"))
		("mobility_cannon"
			speed(6.2) ;----------------------------------Max speed.
			weight(1633) ;--------------------------------Weight in Kilograms.
		)
	}

	{bone "basis"
		{speed2 7}
	}
	{bone "gun_rot"
		{limits -5 37}
		{speed2 8}
	}
	{bone "turret"
		{limits -4 4}
		{speed2 8}
	}