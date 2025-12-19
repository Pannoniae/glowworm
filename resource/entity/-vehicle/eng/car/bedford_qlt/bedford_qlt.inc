
	(include "/properties/car.ext")
	(include "/properties/selection/vehicle_elongated.inc" scale(1.10))
	{props "multi_board" "truck" "vision_lev02" "Captor"}
	{able "emit_on_attack"}
	{extension "bedford_qlt.mdl"}
	{collider "truck"}
	{patherId "blitz36"}

	{extender "enumerator"
		{digit_folder "us2"}
	}

	("bodyback" repair(30))
	("shield_cover")
	("wheel" args "wheelright1")
	("wheel" args "wheelleft1")
	("wheel" args "wheelright2")
	("wheel" args "wheelleft2")

	("glass" args "window1")
	("glass" args "window2")
	("glass" args "window3")
	("glass" args "window4")
	("glass" args "window5")
	("fuel" args "fuel1")
	("fuel" args "fuel2")
	("fuel" args "engine3")
	{volume "engine1" {thickness 1.5}}
	("transmission" args "transmission")
	{volume "body1" {able {holed}}}
	{volume "bodyback1" {able {holed}}}
	{volume "shield_cover" {able {holed}}}

	("crew_2_human")
	("passenger_12_human")

	("board_animation"
		place(driver)
		board_begin(board_SdKfz251-1)
		board_end(pose_qld_driver)
		base(doorright)
	)
	("board_animation"
		place(commander)
		board_begin(board_SdKfz251-1)
		board_end(pose_qld_commander)
		base(doorleft)
	)

	{boarder
		{anm "passenger"
			{forward {begin "board_body"} {end "pose_qlt_passenger"} {base "board"}}
			{reverse {end "emit_body" 1} {base "board"}}
		}
		{anm "passenger1"
			{forward {begin "board_body"} {end "pose_qlt_passenger2"} {base "board"}}
			{reverse {end "emit_body" 1} {base "board"}}
		}
		{anm "passenger2"
			{forward {begin "board_body"} {end "pose_qlt_passenger3"} {base "board"}}
			{reverse {end "emit_body" 1} {base "board"}}
		}
	}

	("crew_human" place(seat1)	bone(seat01)	door(emit4)	animation(passenger2) group(passenger))
	("crew_human" place(seat2)	bone(seat02)	door(emit3)	animation(passenger2) group(passenger))
	("crew_human" place(seat3)	bone(seat03)	door(emit4)	animation(passenger1) group(passenger))
	("crew_human" place(seat4)	bone(seat04)	door(emit3)	animation(passenger) group(passenger))
	("crew_human" place(seat5)	bone(seat05)	door(emit4)	animation(passenger) group(passenger))
	("crew_human" place(seat6)	bone(seat06)	door(emit3)	animation(passenger2) group(passenger))
	("crew_human" place(seat7)	bone(seat07)	door(emit4)	animation(passenger1) group(passenger))
	("crew_human" place(seat8)	bone(seat08)	door(emit3)	animation(passenger1) group(passenger))
	("crew_human" place(seat9)	bone(seat09)	door(emit4)	animation(passenger1) group(passenger))
	("crew_human" place(seat10)	bone(seat10)	door(emit3)	animation(passenger) group(passenger))
	("crew_human" place(seat11)	bone(seat11)	door(emit4)	animation(passenger) group(passenger))
	("crew_human" place(seat12)	bone(seat12)	door(emit3)	animation(passenger1) group(passenger))
	("crew_human" place(seat13)	bone(seat13)	door(emit4)	animation(passenger) group(passenger))
	("crew_human" place(seat14)	bone(seat14)	door(emit3)	animation(passenger1) group(passenger))
	("crew_human" place(seat15)	bone(seat15)	door(emit4)	animation(passenger) group(passenger))
	("crew_human" place(seat16)	bone(seat16)	door(emit3)	animation(passenger) group(passenger))
	("crew_human" place(seat17)	bone(seat17)	door(emit4)	animation(passenger1) group(passenger))
	("crew_human" place(seat18)	bone(seat18)	door(emit3)	animation(passenger1) group(passenger))
	("crew_human" place(seat19)	bone(seat19)	door(emit4)	animation(passenger) group(passenger))
	("crew_human" place(seat20)	bone(seat20)	door(emit3)	animation(passenger1) group(passenger))
	("crew_human" place(seat21)	bone(seat21)	door(emit3)	animation(passenger1) group(passenger))
	("crew_human" place(seat22)	bone(seat22)	door(emit4)	animation(passenger) group(passenger))

	{extender "shield" {on}}

	{mass 5131}
	{Chassis
		("car_trace" fx("tracewheel03") step(0.08) wheell("wlf") wheelr("wrf") bonel("FXtraceL1") boner("FXtraceR1"))
		("car_trace" fx("tracewheel03d") step(0.08) wheell("wlr") wheelr("wrr") bonel("FXtraceL2") boner("FXtraceR2"))
		("mobility_car"
			speed(65) ;----------------------------------Max speed.
			speedatmaxturn(15) ;-------------------------Max speed at max turn.
			reverse(22) ;--------------------------------Max speed in Reverse.
			weight(5.131) ;-------------------------------Weight in Tonnes.
			power(72) ;----------------------------------Horse Power.
			fuel(145) ;----------------------------------Fuel capacity in Litres.
			type(fuel) ;---------------------------------Fuel type.
			range(250) ;---------------------------------Range in Kilometers.
		)
	}