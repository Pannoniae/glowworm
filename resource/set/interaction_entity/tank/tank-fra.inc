
;/*=========== French Vehicles Begin ===========*/
{"armored_command"
	{on "commander_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}
(define "amr35_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t70/start"}
		{link_sound "engine_stop"		"vehicle/engine/t70/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t70/idle"}
		{link_sound "engine_full"		"vehicle/engine/t70/full"}
		{link_sound "exhaust"			"vehicle/engine/t70/exhaust"}
		{link_sound "move"				"vehicle/tracks/amr35"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)
(define "r35_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/r35/start"}
		{link_sound "engine_stop"		"vehicle/engine/r35/stop"}
		{link_sound "engine_idle"		"vehicle/engine/r35/idle"}
		{link_sound "engine_full"		"vehicle/engine/r35/full"}
		{link_sound "exhaust"			"vehicle/engine/r35/exhaust"}
		{link_sound "move"				"vehicle/tracks/r35"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "h39_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/h39/start"}
		{link_sound "engine_stop"		"vehicle/engine/h39/stop"}
		{link_sound "engine_idle"		"vehicle/engine/h39/idle"}
		{link_sound "engine_full"		"vehicle/engine/h39/full"}
		{link_sound "exhaust"			"vehicle/engine/h39/exhaust"}
		{link_sound "move"				"vehicle/tracks/r35"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "s35_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/s35/start"}
		{link_sound "engine_stop"		"vehicle/engine/s35/stop"}
		{link_sound "engine_idle"		"vehicle/engine/s35/idle"}
		{link_sound "engine_full"		"vehicle/engine/s35/full"}
		{link_sound "exhaust"			"vehicle/engine/s35/exhaust"}
		{link_sound "move"				"vehicle/tracks/somua"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "b1bis_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/b1bis/start"}
		{link_sound "engine_stop"		"vehicle/engine/b1bis/stop"}
		{link_sound "engine_idle"		"vehicle/engine/b1bis/idle"}
		{link_sound "engine_full"		"vehicle/engine/b1bis/full"}
		{link_sound "exhaust"			"vehicle/engine/b1bis/exhaust"}
		{link_sound "move"				"vehicle/tracks/b1bis"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
{"laffly15tcc"
	("zis5_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("MAC31")
	}
	{on fire "gun" overload
		{ani_play "stop"}
		{ani_play "fire"}
		{call "spawn_shell_vehicle"}
	}
	{on "spawn_shell_vehicle"
		{start_sound "weapon/shot/shell"}
		{add_view "smoke_zenit" "smoke_shell" "fx_invers"}
		{view start "smoke_shell"}
		{delay 2.5 0.5
			{view stop "smoke_shell"}
		}
		{spawn "shell_cannon" "fx_invers" x scale 0.014
			{impulse up 1.5 0.5 dir -4.5 0.7 cz 0.2 0.1 com}
			{add_view "smoke_zenit" "smoke_shell" "fx_shellsmoke"}
			{view start "smoke_shell"}
			{delay_effect 3 1 "stop"}
			{delay 3 0.5
				{hide 15}
			}
		}
	}
	(define "laffly_shield_part"
		{if component %0
			{delay_ex 0.11
                	{tear "piece_medium_steel" bone %0
                		{impulse up 2 1 dir 2 1}
					}
			}
        }
	)
	{on break
		{if component "shield"	
			("laffly_shield_part" args "shieldr1")	
			("laffly_shield_part" args "shieldl1")
			("laffly_shield_part" args "shieldr2")	
			("laffly_shield_part" args "shieldl2")
		}
	}
	{on pierce
		{if component "shield"
			{if stuff "shell_big"
            	("laffly_shield_part" args "shieldr1")
            	("laffly_shield_part" args "shieldl1")
				("laffly_shield_part" args "shieldr2")
            	("laffly_shield_part" args "shieldl2")
            else stuff "size_big"
            	("laffly_shield_part" args "shieldr1")
            	("laffly_shield_part" args "shieldl1")
				("laffly_shield_part" args "shieldr2")
            	("laffly_shield_part" args "shieldl2")
            }
		}
	}
	
}
{"laffly_s15_toe tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/r35_up"}
		{link_sound "engine_idle"		"vehicle/engine/zis5/idle"}
		{link_sound "engine_full"		"vehicle/engine/r35"}
		{link_sound "engine_stop"		"vehicle/engine/r35_end"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
		{link_sound "exhaust"			"vehicle/engine/r35_up"}
	}
	{on "add_weapon_sound" overload
		("MAC31")
	}
}
{"lorraine39"
	("amr35_sound")
}
{"lorraine37l tank"
	("amr35_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
	}		
}
{"lorraine39l_am tank"
	("amr35_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
	}		
}

{"amr35-13mm tank"
	("amr35_sound")
	{on "add_weapon_sound" overload
		("M2HB")
		("MAC31")
	}
}
{"amr35-25mm tank"
	("amr35_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("MAC31")
	}
}
{"r35 tank"
	("r35_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("MAC31")
	}
}
{"r39 tank"
	("r35_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("MAC31")
	}
}
{"h35 tank"
	("h39_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("MAC31")
	}
	{on fire "gun" 
		{ani_play "fire_35"}
	}
}
{"h39 tank"
	("h39_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("MAC31")
	}
}
{"s35 tank"
	("s35_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("MAC31")
	}
}
{"char_d1b tank"
	("s35_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("MAC31")
	}
}
{"char_d2 tank"
	("s35_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("MAC31")
	}
}
{"b1bis tank"
	("b1bis_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("MAC31")
	}
	{on fire "gun2"
        {view start "flashbarrel11"}
		{view start "flashbarrel11s"}
		{ani_play "fire1"}
		{delay 0.8
			{view pause "flashbarrel11"}
		}
		{delay 0.2
			{view pause "flashbarrel11s"}
		}
	}
}
{"fcm2c tank"
	("b1bis_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Hotchkiss_MG")
	}
}
{"arl44 tank"
	("b1bis_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("MAC31")
	}
}
{"arl44_early tank"
	("b1bis_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("MAC31")
	}
	{on fire "gun" 
		{ani_play "fire2"}
	}
}
{"bs-75 tank"
	("t26_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
	}
}
{"panhard tank"
	("sdkfz234_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("MAC31")
	}
}
{"panhard_sa35"
	("sdkfz234_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
	}
}
{"amc_p16 tank"
	("amr35_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("MAC31")
	}
}
{"ft17"
	("t26_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
	}
}
{"ft17m31"
	("t26_sound")
	{on "add_weapon_sound" overload
		("MAC31")
	}
}
{"h39_hun tank"
	("h39_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("MAC31")
	}
}
{"s35_hun tank"
	("s35_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("MAC31")
	}
}
;/*=========== French Vehicles End ===========*/