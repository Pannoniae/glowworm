
	(include "/properties/armoredcar.ext")
	(include "/properties/selection/vehicle.inc" scale(0.8))
	{props "tank" "-turret" "explosion_throw_crew" "vision_lev02" "detect_tank_mg" "open_death_fx"}
	{extension "daimler_dingo.mdl"}
	(include "daimler_dingo.ext")
	{targetclass "armoredcar_l"}
	{targetSelector "tank_bullet"}
	{patherId "sdkfz232"}
	{extension "crew.ext"}

	{extender "enumerator"
		{digit_folder "us2"}
	}

	{Weaponry
		{place "mgun"
			{type "main"}
			{gunner "commander"}
			{charger "commander"}
			{LinkBone "mgun"}
			{LinkAnimation "off"}
			("abm_mgun")
			{ai_in_manual}
			{basic}
		}
	}
	{mass 3200}
	{Chassis "wheel"
		("car_trace" fx("tracewheel03") step(0.08) wheell("wlf") wheelr("wrf") bonel("FXtraceL1") boner("FXtraceR1"))
		("car_trace" fx("tracewheel03") step(0.08) wheell("wlr") wheelr("wrr") bonel("FXtraceL2") boner("FXtraceR2"))
		("mobility_btr"
			speed(96) ;----------------------------------Max speed.
			speedatmaxturn(25) ;-------------------------Max speed at max turn. 
			reverse(82) ;--------------------------------Max speed in Reverse.
			weight(3.2) ;-------------------------------Weight in Tonnes.
			power(55) ;---------------------------------Horse Power.
			fuel(81) ;----------------------------------Fuel capacity in Litres.
			type(fuel) ;-------------------------------Fuel type.
			range(320) ;---------------------------------Range in Kilometers.
		)
	}

	{bone "mgun_h_rot1"
		{speed2 60}
	}
	{bone "mgun_h_rot2"
		{speed2 60}
	}
