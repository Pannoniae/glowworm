
;/*=========== Italian Vehicles Begin ===========*/
(define "ab41_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/ab41/start"}
		{link_sound "engine_stop"		"vehicle/engine/ab41/stop"}
		{link_sound "engine_idle"		"vehicle/engine/ab41/idle"}
		{link_sound "engine_full"		"vehicle/engine/ab41/full"}
		{link_sound "exhaust"			"vehicle/engine/ab41/exhaust"}
		{link_sound "move"			"vehicle/wheels/truck"}
		{link_sound "brake"			"vehicle/wheels/brake"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}

		{link_sound "wheel_ground"  	"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_grass" 		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_water" 		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle" 		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud" 		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_snow" 		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_road" 		"vehicle/wheels/overlay/wheel_overlay_road"}
		{link_sound "wheel_rock" 		"vehicle/wheels/overlay/wheel_overlay_rock"}
		{link_sound "wheel_wood" 		"vehicle/wheels/overlay/wheel_overlay_wood"}
	}
)
(define "carro_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/carro/start"}
		{link_sound "engine_stop"		"vehicle/engine/carro/stop"}
		{link_sound "engine_idle"		"vehicle/engine/carro/idle"}
		{link_sound "engine_full"		"vehicle/engine/carro/full"}
		{link_sound "exhaust"			"vehicle/engine/carro/exhaust"}
		{link_sound "move"				"vehicle/tracks/carro"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)
(define "l640_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/l6-40/start"}
		{link_sound "engine_stop"		"vehicle/engine/l6-40/stop"}
		{link_sound "engine_idle"		"vehicle/engine/l6-40/idle"}
		{link_sound "engine_full"		"vehicle/engine/l6-40/full"}
		{link_sound "exhaust"			"vehicle/engine/l6-40/exhaust"}
		{link_sound "move"			"vehicle/tracks/l6-40"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}

)
(define "l335_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/cv33/start"}
		{link_sound "engine_stop"		"vehicle/engine/cv33/stop"}
		{link_sound "engine_idle"		"vehicle/engine/cv33/idle"}
		{link_sound "engine_full"		"vehicle/engine/cv33/full"}
		{link_sound "exhaust"			"vehicle/engine/cv33/exhaust"}
		{link_sound "move"			"vehicle/tracks/l6-40"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)
{"ab40 tank"
	("ab41_sound")
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "mgun1" overload
		{play_sound "bkg_mg"}
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
	}
}
{"ab41 tank"
	("ab41_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("Breda38_MG")
	}
}
{"ab43 tank"
	("ab41_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("Breda38_MG")
	}
}
{"fiat3000"
	("pz1_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "mgun1" overload
		{play_sound "bkg_mg"}
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
	}
}
{"l640 tank"
	("l640_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("Breda38_MG")
	}
}
{"l640fl tank"
	("l640_sound")
	{on "add_weapon_sound" overload
		("Breda38_MG")
	}
	{on spawn
		{add_view "flamer_fire_tank" "flame" "foresight1"}
		{add_view "flamer_fire_barrel" "fire" "foresight1"}
	}
	{on operatable on
		{view start "fire"}
	}
	{on operatable off
		{view stop "fire"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	("flame_weapon" args gun 60 1 40)
}
{"l640_37mm"
	("l640_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("Breda38_MG")
	}
}
{"m4732 tank"
	("l640_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
	}
}
{"cv35 tank"
	("l335_sound")
	{on "add_weapon_sound" overload
		("Breda38_MG")
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "gun" overload
		{play_sound "bkg_mg"}
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
	}
}
{"cv35cc tank"
	("l335_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
}
{"m1139 tank"
	("carro_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("Breda38_MG")
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "mgun" overload
		{play_sound "bkg_mg"}
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
	}
}
{"m1340 tank"
	("carro_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("Breda38_MG")
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "mgun2" overload
		{play_sound "bkg_mg"}
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
	}
}
{"m1441 tank"
	("carro_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("Breda38_MG")
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "mgun2" overload
		{play_sound "bkg_mg"}
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
	}
}
{"m1542 tank"
	("carro_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("Breda38_MG")
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "mgun2" overload
		{play_sound "bkg_mg"}
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
	}
}
{"m15_contraereo"
	("carro_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
}
{"p2640"
	("carro_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Breda38_MG")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}	
}
{"p2640_18"
	("carro_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Breda38_MG")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}	
}
{"pz4g_ita tank"
	("pz4_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("MG34")
	}
}
{"m7518 tank"
	("carro_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
	}
}
{"m7532 tank"
	("carro_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
	}
}
{"m7534 tank"
	("carro_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
	}
}
{"m7546 tank"
	("carro_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Breda38_MG")
	}
}
{"m10525 tank"
	("carro_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
	}
}
{"stug3g_ita tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz3/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz3/full"}
		{link_sound "exhaust"			"vehicle/engine/pz3/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz3"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("MG34")
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}
{"pz3n_ita tank"
	("pz3_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("MG34")
	}
}
{"as37 tank"
	("ab41_sound")
	{on "add_weapon_sound" overload
		("MG13")
	}
}
{"marder3h tank"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.15 0.05)
	}
}
{"breda_61t"
	("hanomag_sound")
}
{"sdkfz7_hun"
	("hanomag_sound")
}
{"sdkfz7tractor"
	("hanomag_sound")
}
{"voroshilovets"
	("t34_sound")
}
{"caterpillar"
	("s60_sound")
}
{"kv1_40fin"
	("kv_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
}
{"cv35_hun tank"
	("l335_sound")
	{on "add_weapon_sound" overload
		("Breda38_MG")
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "gun" overload
		{play_sound "bkg_mg"}
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
	}
}
{"r35_hun tank"
	("r35_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("MAC31")
	}
}

{"pz4e_hun tank"
	("pz4_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("MG34")
	}
}
{"kv2_39 tank"
	("kv_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("DT")
	}
	{on fire "gun" 
		{ani_play "fire_39"}
	}
}
{"t26_31a tank"
	("t26_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("DT")
	}
	{on spawn
		("rand_cut_else" args "cooler1" "cooler2")
	}
	{on "update_turret"
		{if work "turret"
			{weapon_work "mgun2" 1}
		else
			{weapon_work "mgun2" 0}
		}
		{inherited}
	}
	{on "update_multi_turret"
		{if work "aux_turret2"
			{weapon_work "gun" 1}
		else
			{weapon_work "gun" 0}
		}
		{inherited}
	}
}
;/*=========== Italian Vehicles End ===========*/