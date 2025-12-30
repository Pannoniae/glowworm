
	(include "/properties/armoredcar.ext")
	(include "/properties/shadow/tank.inc" scale(1.0))
	(include "/properties/selection/vehicle.inc" scale(1.0))
	{props "sdkfz251c" "tank" "wheeled" "multi_board" "explosion_throw_crew" "vision_lev02" "tractor" "tractor_heavy" "detect_tank_mg"}
	{able "emit_passengers_on_enemy"}
	{extension "m3.mdl"}
	(include "m3.ext")
	{patherId "sdkfz251"}
	{targetclass "armoredcar"}
	{targetSelector "tank_bullet"}

	{boarder
    {anm "passengers"
		{forward	{begin	"board_body"} {end "seat_passenger"}}   
		{reverse 	{end	"emit_body" 1}}
	}
	{anm "passengers1"
		{forward	{begin	""} {end "seat_passenger"} {base"doorback"}}   
		{reverse 	{end	"emit_body" 1}}
	}
}

(define "crew_human"
	{placer
		{place "%place" {group "%group"} {linkbone "%bone"} {turnoff {sensor} {shadow}}}
	}
	{boarder
		{door "%door"}
		{link "%door" "%place" {anm "%animation"} {forward putoff} {reverse puton}}
	}
)

{placer
	{place "driver" {visor "driver"}}
	{place "gunner" {visor "main"}}
}

("board_animation" place(driver)	  board_begin(board_big-midcar_driver) board_end(seat_driver_car) base(doorleft))
("board_animation" place(gunner)	  board_begin(board_big-midcar) board_end(seat_m7_mgunner) base(doorright))

("crew_human" place(driver)	door(emit1) bone(driver) animation(driver) 		group(crew))
("crew_human" place(gunner)	door(emit2) bone(gunner) animation(gunner) 		group(crew))
("crew_human" place(seat1)	door(emit3) bone(seat01) animation(passengers) 	group(passengers))
("crew_human" place(seat2)	door(emit4) bone(seat02) animation(passengers)	group(passengers))
("crew_human" place(seat3)	door(emit4) bone(seat03) animation(passengers)	group(passengers))
("crew_human" place(seat4)	door(emit5) bone(seat04) animation(passengers)	group(passengers))
("crew_human" place(seat5)	door(emit5) bone(seat05) animation(passengers)	group(passengers))
("crew_human" place(seat6)	door(emit6) bone(seat06) animation(passengers)	group(passengers))
("crew_human" place(seat7)	door(emit7) bone(seat07) animation(passengers)	group(passengers))
("crew_human" place(seat8)	door(emit7) bone(seat08) animation(passengers)	group(passengers))

	{sensor
		{visor "human"
			{vision "none"}
		}
		{visor "around"
			{vision "none"}
		}
	}

	{mass 8500}
	{Chassis "wheel"
		("tank_trace_ex" fx("tracks_sm2") step(0.2) len(0.46) boneleft("FXtraceL3") boneright("FXtraceR3"))
		("car_trace" fx("tracewheel03a") step(0.09) wheell("wlf") wheelr("wrf") bonel("FXtraceL1") boner("FXtraceR1"))

		("mobility_car"
			speed(53) ;----------------------------------Max speed.
			speedatmaxturn(14) ;-------------------------Max speed at max turn.
			reverse(9) ;---------------------------------Max speed in Reverse.
			weight(8.5) ;--------------------------------Weight in Tonnes.
			power(100) ;---------------------------------Horse Power.
			fuel(160) ;----------------------------------Fuel capacity in Litres.
			type(fuel) ;---------------------------------Fuel type.
			range(150) ;---------------------------------Range in Kilometers.
		)
	}
