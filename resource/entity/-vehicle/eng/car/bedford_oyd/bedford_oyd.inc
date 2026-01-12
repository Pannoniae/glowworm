
	(include "/properties/car.ext")

	(include "/properties/selection/vehicle_elongated.inc" scale(1.10))
	{props "multi_board" "truck" "vision_lev02" "tractor" "tractor_medium" "Captor"}
	{able "emit_on_attack"}
	{extension "bedford_oyd.mdl"}
	{collider "truck"}
	{patherId "blitz36"}

	{extender "enumerator"
		{digit_folder "us2"}
	}

	("wheel" args "wheelright1")
	("wheel" args "wheelleft1")
	("wheel" args "wheelright2")
	("wheel" args "wheelleft2")

	("glass" args "window1")
	("glass" args "window2")
	("glass" args "window3")
	("glass" args "window4")
	("fuel" args "fuel1")
	("fuel" args "fuel2")
	("transmission" args "transmission")

	("bodyback" repair(30))

	("shield_cover")

	{volume "body2" {able {holed}}}
	{volume "bodyback1" {material "wood"} {tags "wood"} {able {holed}}}
	{volume "bodyback2" {material "wood"} {tags "wood"}}
	{volume "bodyback3" {material "wood"} {tags "wood"}}
	{volume "bodyback4" {material "wood"} {tags "wood"}}
	{volume "bodyback5" {material "wood"} {tags "wood"}}
	{volume "bodyback6" {material "wood"} {tags "wood"}}
	{volume "bodyback7" {material "wood"} {tags "wood"}}

	{volume "shield_cover" {able {holed}}}

	("wood" args "bodyback1")
	("wood" args "bodyback2")
	("wood" args "bodyback3")
	("wood" args "bodyback4")
	("wood" args "bodyback5")
	("wood" args "bodyback6")
	("wood" args "bodyback7")

	("crew_2_human")
	("passenger_10_human")

	("board_animation"
		place(driver)
		board_begin(board_big-midcar)
		board_end(seat_driver_car)
		base(doorright)
	)
	("board_animation"
		place(commander)
		board_begin(board_big-midcar_driver)
		board_end(seat_passenger)
		base(doorleft)
	)

	{boarder
		{anm "passenger"
			{forward {begin "board_body"} {end "seat_passenger"} {base "board"}}
			{reverse {end "emit_body" 1} {base "board"}}
		}
	}

	{extender "shield" {on}}

	{extender "inventory"
		{box
		}
	}

	{mass 4631}
	{Chassis
		("car_trace" fx("tracewheel03") step(0.08) wheell("wlf") wheelr("wrf") bonel("FXtraceL1") boner("FXtraceR1"))
		("car_trace" fx("tracewheel03d") step(0.08) wheell("wlr") wheelr("wrr") bonel("FXtraceL2") boner("FXtraceR2"))
		("mobility_car"
			speed(65) ;----------------------------------Max speed.
			speedatmaxturn(15) ;-------------------------Max speed at max turn.
			reverse(22) ;--------------------------------Max speed in Reverse.
			weight(4.631) ;-------------------------------Weight in Tonnes.
			power(72) ;----------------------------------Horse Power.
			fuel(145) ;----------------------------------Fuel capacity in Litres.
			type(fuel) ;---------------------------------Fuel type.
			range(450) ;---------------------------------Range in Kilometers.
		)
	}

