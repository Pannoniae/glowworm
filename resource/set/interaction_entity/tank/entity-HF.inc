;/*=========== MODDED Vehicles Begin ===========*/

	;/*===random schurzen script START===============================================================*/	

	(define "random_schurzen_78thoma"
		{on spawn
			{delay 0.1{bone hide "regular_schurzen"}{bone hide "thoma_schurzen"}}
			{delay 0.1
			{volumes "shieldl1" disable all}
			{volumes "shieldl2" disable all}
			{volumes "shieldl3" disable all}
			{volumes "shieldl4" disable all}
			{volumes "shieldl5" disable all}
			{volumes "shieldr1" disable all}
			{volumes "shieldr2" disable all}
			{volumes "shieldr3" disable all}
			{volumes "shieldr4" disable all}
			{volumes "shieldr5" disable all}
			
			{volumes "shieldl6"  disable all}
			{volumes "shieldl7"  disable all}
			{volumes "shieldl8"  disable all}
			{volumes "shieldl9"  disable all}
			{volumes "shieldl10" disable all}
			{volumes "shieldl11" disable all}
			{volumes "shieldr6"  disable all}
			{volumes "shieldr7"  disable all}
			{volumes "shieldr8"  disable all}
			{volumes "shieldr9"  disable all}
			{volumes "shieldr10" disable all}
			{volumes "shieldr11" disable all}
			}
			{delay 0.1
				{if rand 0.78
					{delay 0.1
					{bone hide "regular_schurzen"}
					{volumes "shieldl1" disable all}
					{volumes "shieldl2" disable all}
					{volumes "shieldl3" disable all}
					{volumes "shieldl4" disable all}
					{volumes "shieldl5" disable all}
					{volumes "shieldr1" disable all}
					{volumes "shieldr2" disable all}
					{volumes "shieldr3" disable all}
					{volumes "shieldr4" disable all}
					{volumes "shieldr5" disable all}
					
					{bone show "thoma_schurzen"}
					{volumes "shieldl6"  enable all}
					{volumes "shieldl7"  enable all}
					{volumes "shieldl8"  enable all}
					{volumes "shieldl9"  enable all}
					{volumes "shieldl10" enable all}
					{volumes "shieldl11" enable all}
					{volumes "shieldr6"  enable all}
					{volumes "shieldr7"  enable all}
					{volumes "shieldr8"  enable all}
					{volumes "shieldr9"  enable all}
					{volumes "shieldr10" enable all}
					{volumes "shieldr11" enable all}
					}
				else
					{delay 0.1
					{bone hide "thoma_schurzen"}
					{volumes "shieldl6"  disable all}
					{volumes "shieldl7"  disable all}
					{volumes "shieldl8"  disable all}
					{volumes "shieldl9"  disable all}
					{volumes "shieldl10" disable all}
					{volumes "shieldl11" disable all}
					{volumes "shieldr6"  disable all}
					{volumes "shieldr7"  disable all}
					{volumes "shieldr8"  disable all}
					{volumes "shieldr9"  disable all}
					{volumes "shieldr10" disable all}
					{volumes "shieldr11" disable all}
					
					{bone show "regular_schurzen"}
					{volumes "shieldl1" enable all}
					{volumes "shieldl2" enable all}
					{volumes "shieldl3" enable all}
					{volumes "shieldl4" enable all}
					{volumes "shieldl5" enable all}
					{volumes "shieldr1" enable all}
					{volumes "shieldr2" enable all}
					{volumes "shieldr3" enable all}
					{volumes "shieldr4" enable all}
					{volumes "shieldr5" enable all}
					}
				}
			}
		}
	)

	(define "random_schurzen_50thoma"
		{on spawn
			{delay 0.1{bone hide "regular_schurzen"}{bone hide "thoma_schurzen"}}
			{delay 0.1
			{volumes "shieldl1" disable all}
			{volumes "shieldl2" disable all}
			{volumes "shieldl3" disable all}
			{volumes "shieldl4" disable all}
			{volumes "shieldl5" disable all}
			{volumes "shieldr1" disable all}
			{volumes "shieldr2" disable all}
			{volumes "shieldr3" disable all}
			{volumes "shieldr4" disable all}
			{volumes "shieldr5" disable all}
			
			{volumes "shieldl6"  disable all}
			{volumes "shieldl7"  disable all}
			{volumes "shieldl8"  disable all}
			{volumes "shieldl9"  disable all}
			{volumes "shieldl10" disable all}
			{volumes "shieldl11" disable all}
			{volumes "shieldr6"  disable all}
			{volumes "shieldr7"  disable all}
			{volumes "shieldr8"  disable all}
			{volumes "shieldr9"  disable all}
			{volumes "shieldr10" disable all}
			{volumes "shieldr11" disable all}
			}
			{delay 0.1
				{if rand 0.50
					{delay 0.1
					{bone hide "regular_schurzen"}
					{volumes "shieldl1" disable all}
					{volumes "shieldl2" disable all}
					{volumes "shieldl3" disable all}
					{volumes "shieldl4" disable all}
					{volumes "shieldl5" disable all}
					{volumes "shieldr1" disable all}
					{volumes "shieldr2" disable all}
					{volumes "shieldr3" disable all}
					{volumes "shieldr4" disable all}
					{volumes "shieldr5" disable all}
					
					{bone show "thoma_schurzen"}
					{volumes "shieldl6"  enable all}
					{volumes "shieldl7"  enable all}
					{volumes "shieldl8"  enable all}
					{volumes "shieldl9"  enable all}
					{volumes "shieldl10" enable all}
					{volumes "shieldl11" enable all}
					{volumes "shieldr6"  enable all}
					{volumes "shieldr7"  enable all}
					{volumes "shieldr8"  enable all}
					{volumes "shieldr9"  enable all}
					{volumes "shieldr10" enable all}
					{volumes "shieldr11" enable all}
					}
				else
					{delay 0.1
					{bone hide "thoma_schurzen"}
					{volumes "shieldl6"  disable all}
					{volumes "shieldl7"  disable all}
					{volumes "shieldl8"  disable all}
					{volumes "shieldl9"  disable all}
					{volumes "shieldl10" disable all}
					{volumes "shieldl11" disable all}
					{volumes "shieldr6"  disable all}
					{volumes "shieldr7"  disable all}
					{volumes "shieldr8"  disable all}
					{volumes "shieldr9"  disable all}
					{volumes "shieldr10" disable all}
					{volumes "shieldr11" disable all}
					
					{bone show "regular_schurzen"}
					{volumes "shieldl1" enable all}
					{volumes "shieldl2" enable all}
					{volumes "shieldl3" enable all}
					{volumes "shieldl4" enable all}
					{volumes "shieldl5" enable all}
					{volumes "shieldr1" enable all}
					{volumes "shieldr2" enable all}
					{volumes "shieldr3" enable all}
					{volumes "shieldr4" enable all}
					{volumes "shieldr5" enable all}
					}
				}
			}
		}
	)
	
	(define "random_schurzen_17thoma"
		{on spawn
			{delay 0.1{bone hide "regular_schurzen"}{bone hide "thoma_schurzen"}}
			{delay 0.1
			{volumes "shieldl1" disable all}
			{volumes "shieldl2" disable all}
			{volumes "shieldl3" disable all}
			{volumes "shieldl4" disable all}
			{volumes "shieldl5" disable all}
			{volumes "shieldr1" disable all}
			{volumes "shieldr2" disable all}
			{volumes "shieldr3" disable all}
			{volumes "shieldr4" disable all}
			{volumes "shieldr5" disable all}
			
			{volumes "shieldl6"  disable all}
			{volumes "shieldl7"  disable all}
			{volumes "shieldl8"  disable all}
			{volumes "shieldl9"  disable all}
			{volumes "shieldl10" disable all}
			{volumes "shieldl11" disable all}
			{volumes "shieldr6"  disable all}
			{volumes "shieldr7"  disable all}
			{volumes "shieldr8"  disable all}
			{volumes "shieldr9"  disable all}
			{volumes "shieldr10" disable all}
			{volumes "shieldr11" disable all}
			}
			{delay 0.1
				{if rand 0.17
					{delay 0.1
					{bone hide "regular_schurzen"}
					{volumes "shieldl1" disable all}
					{volumes "shieldl2" disable all}
					{volumes "shieldl3" disable all}
					{volumes "shieldl4" disable all}
					{volumes "shieldl5" disable all}
					{volumes "shieldr1" disable all}
					{volumes "shieldr2" disable all}
					{volumes "shieldr3" disable all}
					{volumes "shieldr4" disable all}
					{volumes "shieldr5" disable all}
					
					{bone show "thoma_schurzen"}
					{volumes "shieldl6"  enable all}
					{volumes "shieldl7"  enable all}
					{volumes "shieldl8"  enable all}
					{volumes "shieldl9"  enable all}
					{volumes "shieldl10" enable all}
					{volumes "shieldl11" enable all}
					{volumes "shieldr6"  enable all}
					{volumes "shieldr7"  enable all}
					{volumes "shieldr8"  enable all}
					{volumes "shieldr9"  enable all}
					{volumes "shieldr10" enable all}
					{volumes "shieldr11" enable all}
					}
				else
					{delay 0.1
					{bone hide "thoma_schurzen"}
					{volumes "shieldl6"  disable all}
					{volumes "shieldl7"  disable all}
					{volumes "shieldl8"  disable all}
					{volumes "shieldl9"  disable all}
					{volumes "shieldl10" disable all}
					{volumes "shieldl11" disable all}
					{volumes "shieldr6"  disable all}
					{volumes "shieldr7"  disable all}
					{volumes "shieldr8"  disable all}
					{volumes "shieldr9"  disable all}
					{volumes "shieldr10" disable all}
					{volumes "shieldr11" disable all}
					
					{bone show "regular_schurzen"}
					{volumes "shieldl1" enable all}
					{volumes "shieldl2" enable all}
					{volumes "shieldl3" enable all}
					{volumes "shieldl4" enable all}
					{volumes "shieldl5" enable all}
					{volumes "shieldr1" enable all}
					{volumes "shieldr2" enable all}
					{volumes "shieldr3" enable all}
					{volumes "shieldr4" enable all}
					{volumes "shieldr5" enable all}
					}
				}
			}
		}
	)

	;/*===random schurzen script END===============================================================*/	
	;/*===manual turret rotation script START======================================================*/

	{"turret_manual"
		{on "add_movement_sound"
			{link_sound "rotate_turret_manual"	"vehicle/turret/handcrank/handcrank_heavy"}
		}
		{on spawn
			{ik_enable "turret" 1}
			{ik_enable "turret_manual" 0}
			{if not "engine_on"
				{ik_enable "turret" 0}
				{ik_enable "turret_manual" 1}				
			}
		}
	
		{on ik begin "turret" overload
			{kill_delay "rotate_turret"}
			{if not "rotate_turret"
				{play_sound "rotate_turret" 1}
				{set "rotate_turret" 1}
			}
		}
		{on ik end "turret" overload
			{delay 0.25 "rotate_turret"
				{stop_sound "rotate_turret"}
				{set "rotate_turret" 0}
			}
		}
	
		{on ik begin "turret_manual" overload
			{kill_delay "rotate_turret_manual"}
			{if not "rotate_turret_manual"
				{play_sound "rotate_turret_manual" 1}
				{set "rotate_turret_manual" 1}
			}
		}
		{on ik end "turret_manual" overload
			{delay 0.25 "rotate_turret_manual"
				{stop_sound "rotate_turret_manual"}
				{set "rotate_turret_manual" 0}
			}
		}

		{on break
			{if component "engine"
				{delay 1.5
					{ik_enable "turret" 0}
					{ik_enable "turret_manual" 1}
					{damage_report "turret" "component/turret_manual_switch"}
				}
			}
			{if component "turret"
				{ik_enable "turret_manual" 0}
			}
		}
		{on "engine_on"
			{ik_enable "turret" 1}
			{ik_enable "turret_manual" 0}
		}
		{on "engine_off"
			{delay 1.5
				{ik_enable "turret" 0}
				{ik_enable "turret_manual" 1}
				{damage_report "turret" "component/turret_manual_switch"}
			}
		}
	}
	
	;/*===manual turret rotation script END===============================================================*/	
{"panzer4j_late tank"
	("random_schurzen_78thoma")
}
{"panzer4j tank"
	("random_schurzen_50thoma")
}


{"kht27 tank"
	("t27_sound")
	{on spawn
		{add_view "flamer_fire" "gun" "foresight1"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	("flame_weapon" args gun 40 1 40)
}
{"t3_hmc tank"
	("m3_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
		("M1919A4")
	}
	{on spawn
		{add_view	"flash_gun_big"			"flashbarrel5"			"foresight5"}
	}
	{on fire "mgun"
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{view start "flashbarrel5"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
}

{"kht27 tank"
	("t27_sound")
	{on spawn
		{add_view "flamer_fire" "gun" "foresight1"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	("flame_weapon" args gun 40 1 40)
}
{"mtls_1g14 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m5a1_stuart/start"}
		{link_sound "engine_stop"		"vehicle/engine/m5a1_stuart/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m5a1_stuart/idle"}
		{link_sound "engine_full"		"vehicle/engine/m5a1_stuart/full"}
		{link_sound "exhaust"			"vehicle/engine/m5a1_stuart/exhaust"}
		{link_sound "move"				"vehicle/tracks/m5a1_stuart/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("M1919A4")
	}
	{on fire "gun"
		{call_synced "check_reliability_mtls"}
	}
	{on move on
		{tags add "vehicle_moving"}
		{if tagged "vehicle_moving"
			{call_synced "check_reliability_mtls_moving"}
		}
	}
	{on move off
		{delay 0.1
		{tags remove "vehicle_moving"}
		}
	}
}

{"t1_hmc tank"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/gun/gun_horizontal"}
		{link_sound "rotate_gun" 		"vehicle/turret/gun/gun_vertical"}
		{link_sound "engine_start"		"vehicle/engine/t27/start"}
		{link_sound "engine_stop"		"vehicle/engine/t27/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t27/idle"}
		{link_sound "engine_full"		"vehicle/engine/t27/full"}
		{link_sound "exhaust"			"vehicle/engine/t70/exhaust"}
		{link_sound "move"				"vehicle/tracks/t27"}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.75 1.25)
	}
	{on "reload_delay" overload
		("reload_time" args 6)		;// weapon reload time
	}
}

{"m2a4 tank"
	("m3_stuart_sound")
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel3"	"foresight3"}
	}
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("M1919A4")
	}
	{on fire "mgun1" overload
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{view start "flashbarrel3"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on break
		{if not tagged "exploded"
			{if component "ShieldL2"
				{bone hide "headlightl"}
				{components "ShieldL1" destroy}
				{components "Detail4" destroy}
				{components "Detail5" destroy}
				{components "Detail6" destroy}
			}
			{if component "ShieldR2"
				{bone hide "headlightr"}
				{components "ShieldR1" destroy}
				{components "Detail7" destroy}
				{components "Detail8" destroy}
			}
			{if component "ShieldR3"
				{components "ShieldR4" destroy}
			}
			{if component "ShieldL3"
				{components "ShieldL4" destroy}
				{components "Detail6" destroy}
			}
		}
	}
}

{"m1_combat_car tank"
	("m3_stuart_sound")
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel3"	"foresight3"}
		{add_view	"flash_gun_hmg_m2hb"	"flashbarrel1"	"foresight1"}
	}
	{on "add_weapon_sound" overload
		("M1919A4")
		("M2HB")
	}
	{on fire "mgun1" overload
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{view start "flashbarrel3"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun3" overload
		{ani_play "fire" +2.5 resume}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel1"}
		}
	}
	{on break
		{if not tagged "exploded"
			{if component "ShieldL2"
				{bone hide "headlightl"}
				{components "ShieldL1" destroy}
				{components "Detail4" destroy}
				{components "Detail5" destroy}
				{components "Detail6" destroy}
			}
			{if component "ShieldR2"
				{bone hide "headlightr"}
				{components "ShieldR1" destroy}
				{components "Detail7" destroy}
				{components "Detail8" destroy}
			}
			{if component "ShieldR3"
				{components "ShieldR4" destroy}
			}
			{if component "ShieldL3"
				{components "ShieldL4" destroy}
				{components "Detail6" destroy}
			}
		}
	}
}
{"m2a4 tank"
	("m3_stuart_sound")
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel3"	"foresight3"}
	}
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("M1919A4")
	}
	{on fire "mgun1" overload
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{view start "flashbarrel3"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on break
		{if not tagged "exploded"
			{if component "ShieldL2"
				{bone hide "headlightl"}
				{components "ShieldL1" destroy}
				{components "Detail4" destroy}
				{components "Detail5" destroy}
				{components "Detail6" destroy}
			}
			{if component "ShieldR2"
				{bone hide "headlightr"}
				{components "ShieldR1" destroy}
				{components "Detail7" destroy}
				{components "Detail8" destroy}
			}
			{if component "ShieldR3"
				{components "ShieldR4" destroy}
			}
			{if component "ShieldL3"
				{components "ShieldL4" destroy}
				{components "Detail6" destroy}
			}
		}
	}
}
{"m2a1 tank"
	("m3_stuart_sound")
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel3"	"foresight3"}
		{add_view	"flash_gun_hmg_m2hb"	"flashbarrel1"	"foresight1"}
	}
	{on "add_weapon_sound" overload
		("M1919A4")
		("M2HB")
	}
	{on fire "mgun1" overload
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{view start "flashbarrel3"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun3" overload
		{view start "flashbarrel1"}
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel1"}
		}
	}
	{on break
		{if not tagged "exploded"
			{if component "ShieldL2"
				{bone hide "headlightl"}
				{components "ShieldL1" destroy}
				{components "Detail4" destroy}
				{components "Detail5" destroy}
				{components "Detail6" destroy}
			}
			{if component "ShieldR2"
				{bone hide "headlightr"}
				{components "ShieldR1" destroy}
				{components "Detail7" destroy}
				{components "Detail8" destroy}
			}
			{if component "ShieldR3"
				{components "ShieldR4" destroy}
			}
			{if component "ShieldL3"
				{components "ShieldL4" destroy}
				{components "Detail6" destroy}
			}
		}
	}
}

{"t1e1 tank"
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("M1919A4")
	}
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz1/"}
		{link_sound "engine_start"		"vehicle/engine/M8_Greyhound/start"}
		{link_sound "engine_full"		"vehicle/engine/M8_Greyhound/full"}
		{link_sound "engine_stop"		"vehicle/engine/M8_Greyhound/stop"}
		{link_sound "exhaust"			"vehicle/engine/M8_Greyhound/exhaust"}
		{link_sound "engine_idle"		"vehicle/engine/M8_Greyhound/idle"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
	{on "update_lights"
		{if not sunlight					;// checks if night time to show headlight fx
			{if bone "detail1" visible
				{call "lights_on"}
			else
				{call "lights_off"}
			}
		else
			{call "lights_off"}
		}
	}
}

{"t1e3 tank"
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("M1919A4")
	}
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz1/"}
		{link_sound "engine_start"		"vehicle/engine/pz2/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz2/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz2/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz2/full"}
		{link_sound "exhaust"			"vehicle/engine/pz2/exhaust"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
	{on "update_lights"
		{if not sunlight					;// checks if night time to show headlight fx
			{if bone "detail1" visible
				{call "lights_on"}
			else
				{call "lights_off"}
			}
		else
			{call "lights_off"}
		}
	}
}

{"flakpz_38t tank"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	{on "zenite_terrain_fx" overload} ; // overwrites and stops dust fx on ground from firing main gun
}

{"t3476_42_pt3 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
	{on spawn 
		{add_view "dustrun_sand_small"	"wheel_work_dust"	"FXWheel_Work1"}
		{add_view "dustrun_sand_small"	"wheel_work_dust"	"FXWheel_Work2"}
	}
	{on move on
		{view start "wheel_work_dust"}
	}
	{on move off
		{view pause "wheel_work_dust"}
	}
}

{"t3476_41_pt3 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
	{on spawn 
		{add_view "dustrun_sand_small"	"wheel_work_dust"	"FXWheel_Work1"}
		{add_view "dustrun_sand_small"	"wheel_work_dust"	"FXWheel_Work2"}
	}
	{on move on
		{view start "wheel_work_dust"}
	}
	{on move off
		{view pause "wheel_work_dust"}
	}
}

{"bt7m tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/bt/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("DT")
	}
	{on "commander_hatch_open" overload
		{ani_play "open_commander" +1.8 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "close_commander" +0.7 resume}
	}
}

{"m4a3_75_crab tank"
	("m4a3_sherman_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("M2HB")
		("M1919A4")
	}
	{on spawn
		{add_view	"stop_signal"		"stop_signal"	"FXstop3"}
		{add_view	"stop_signal"		"stop_signal"	"FXstop4"}
		{add_view	"stop_signal"		"stop_signal"	"FXstop5"}
		{add_view	"stop_signal"		"stop_signal"	"FXstop6"}
		("rand_cut_else" args "bench1" "bench2")
		{link_sound "move"				"vehicle/tracks/M4_Sherman/Rubber/"}
		{bone hide "wheel_work"}
		{add_view "dustrun_sand_small"	"wheel_work_dust"	"FXWheel_Work1"}
		{add_view "dustrun_sand_small"	"wheel_work_dust"	"FXWheel_Work2"}
		{volumes "wheel_work" disable all}
		{ani_play "wheel_stop"}
	}
	{on "commander_hatch_open" overload
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on move on
		{bone hide "wheel"}
		{bone show "wheel_work"}
		{view start "wheel_work_dust"}
		{volumes "wheel_work" enable all}
		{volumes "wheel" disable all}
	}
	{on move off
		{bone hide "wheel_work"}
		{bone show "wheel"}
		{ani_play "wheel_stop"}
		{view pause "wheel_work_dust"}
		{volumes "wheel_work" disable all}
		{volumes "wheel" enable all}
	}
}

{"churchill3_avre tank"
	("churchill_sound")
	{on "add_weapon_sound" overload
		("Mortar_12cm")
		("ZB37")
	}
	{on fire "gun" overload
		{call_synced "reloadavre"}
		{volumes "rocket" disable bullet blast}		;// Disables rocket volume after firing while reloading
		{spawn "avre_fire" inv_normal}
		{delay 14.5									;// Delay set to match reload time of main weapon
			{volumes "rocket" enable bullet blast}
		}
	}
	{on break_armor				;// volume breaks
		{if not tagged "exploded"
			{if volume "rocket"
				{call "stat_break"}
				{call_synced "ammo_explosion_small"}
				{call "_explosion"}
				{##delay 0.01
					{call "spawn_shellhole"}
				}
			}
		}
	}
	{on "__explosion"
		{tags add "exploded"}
		{blastwave c4 24 r0 12 r1 24 offset 0 0 75}
		{blastwave c4 4 r0 12 r1 36 offset 0 0 75}
		{spawn "train_die" "basis"}
		{delay 0.1
			{call "_explosion"}
		}
	}
	{on "explosion_blastwave" overload
		{blastwave c4 9 r0 5 r1 10 offset 0 0 75}
		{blastwave c4 2 r0 10 r1 20 offset 0 0 75}
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{spawn "tank_die_heavy" "basis"}
		{start_sound "detonation/explosion_vehicle/bkg/"}
		{if terrain_fx "snow"
			{spawn "tank_die_snow" "basis"}
		else terrain_fx "ice"
			{spawn "tank_die_snow" "basis"}
		else
			{spawn "tank_die_dust" "basis"}
		}
	}
	{on "reloadavre"
			{bone hide "bomb"}
			{delay 1
				{play_sound "breech_open"}
				{ani_play "reload1" +0.53 resume}
			}
			{delay 11.5
				{bone show "bomb"}
				{ani_play "reload2" +0.28 resume}
				{delay 1.5 {play_sound "breech_close"}}
			}
	}
}

{"stuh42_late tank"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("MG34")
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz3/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz3/full"}
		{link_sound "exhaust"			"vehicle/engine/pz3/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz3"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on fire "gun"
		{ani_play "fire.anm_Exported_body" +1 resume}
	}
	{on "gunner2_hatch_open" overload
		{ani_wind "open1" end}
		{ani_play "open" -1.0 resume}
	}
}

{"zis12_94km"
	("zis5_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("multi_barrel_loop" flash(tank_canon_fire_20_25_auto) smoke(ejectsmoke_big) shell(shell_hmgun) weapon(gun) head(0.200))
	
	{on "reload" 
			{bone hide "clip1"}
			{bone hide "clip2"}
			{delay 0.5
				{ani_play "reload" +0.16 resume}
				{bone show "clip1"}
				{bone show "clip2"}
			}
	}
}

{"t80 tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("DT")
	}
}

{"t34s tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
	{on fire "gun"
		{ani_play "fire1" +1 resume}
	}
}

{"t26_32 tank"
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
			{weapon_work "gun2" 1}
		else
			{weapon_work "gun2" 0}
		}
		{inherited}
	}
}

{"panzer3j_funk tank"
	("pz3_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm")
		("MG34")
	}
}
{"panzer3l_funk tank"
	("pz3_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm")
		("MG34")
	}
}

{"panzer5fg tank"
	("pz5_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_HV")
		("MG34")
	}
}

{"sdkfz301b tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz1/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz1/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz1/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz1/full"}
		{link_sound "exhaust"			"vehicle/engine/pz1/exhaust"}
		{link_sound "move"				"vehicle/wheels/halftrack"}
	}
}

{"sdkfz301wanze tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz1/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz1/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz1/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz1/full"}
		{link_sound "exhaust"			"vehicle/engine/pz1/exhaust"}
		{link_sound "move"				"vehicle/wheels/halftrack"}
	}
}

{"gaz_aaa_72k_early"
	("zis5_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}
}

{"zis42"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/zis5/start"}
		{link_sound "engine_stop"		"vehicle/engine/zis5/stop"}
		{link_sound "engine_idle"		"vehicle/engine/zis5/idle"}
		{link_sound "engine_full"		"vehicle/engine/zis5/full"}
		{link_sound "exhaust"			"vehicle/engine/zis5/exhaust"}
		{link_sound "brake"				"vehicle/wheels/brake"}
		{link_sound "move"				"vehicle/wheels/halftrack"}

		{link_sound "open_left"			"vehicle/doors/blitz/open_left"}
		{link_sound "open_right"		"vehicle/doors/blitz/open_right"}
		{link_sound "open_rear"			"vehicle/doors/blitz/open_rear"}
		{link_sound "close_rear"		"vehicle/doors/blitz/close_rear"}
	}
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"25mm_72k_early"
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.23) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_small")
}

{"m41_ampulomet"
    {on spawn
		{add_view "avre_fire" "fire_gun"	"foresight1"}
    }
    {on fire "gun2" 
        {view start "fire_gun"}
    }
}

{"su5_2 tank"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t26/start"}
		{link_sound "engine_stop"		"vehicle/engine/t26/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t26/idle"}
		{link_sound "engine_full"		"vehicle/engine/t26/full"}
		{link_sound "exhaust"			"vehicle/engine/t26/exhaust"}
		{link_sound "move"				"vehicle/tracks/t26/"}
		{link_sound "rotate_turret"		"vehicle/turret/cannon/big"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/big"}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.3)
	}
}

{"zis5eng_e car"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"zis5eng_l car"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"blitz3_6_engineering_e"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"blitz3_6_engineering_l"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"sdkfz251c_ru tank"
	("hanomag_sound")

	{on "event_no_crew" overload}
	{on "event_with_crew" overload}
	{on spawn
		{bone hide "detailhelm"}
	}
	{on "gunner2_hatch_open" overload
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "gunner4_hatch_open" overload
		{ani_play "mgun_aa_2" +1.0 resume}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "mgun_aa_2" -1.0 resume}
	}
}
{"sdkfz251c_8 tank"
	("hanomag_sound")

	{on "event_no_crew" overload}
	{on "event_with_crew" overload}
}

{"yag10_29k car"
	("yag10_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
	}
	{on fire "gun"
		{ani_play "recoil"}
	}

	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.25 0.2)
	}
	{on "reload_delay" overload
		("reload_time" args 5)	;// weapon reload time
	}
	{on spawn
		{ani_wind "support_open" end}
		{tags add "medium_td"}
		{delay 0.1
			{tags remove "truck"}
		}
	}
	{on move on
		{kill_delay "move_off"}
		{ani_play "support_close" 1.0 resume}
	}
	{on move off
		{delay 1 "move_off"
			{ani_play "support_open" 1.0 resume}
		}
	}
}

{"sdkfz10_5"
	("hanomag_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}
}

{"kv1_40_early tank"
	("kv_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
}

{"panzer5g_armor tank"
	("pz5_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_HV")
		("MG34")
	}
}

{"panzer5g_fg1250 tank"
	("pz5_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_HV")
		("MG34")
	}
}

{"kv8s tank"
	("kv_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("DT")
	}
	{on spawn
		{add_view "flamer_fire_tank" "flamer1" "foresight7"}
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
	("flame_weapon" args flamer1 60 7 40)
}

{"t3485_43 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
	}
	{on fire "gun"
		{ani_play "fire1"}
	}
}

{"panzer4f1_e tank"
	("pz4_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("MG34")
	}
}

{"kugelblitz tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz4/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz4/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz4/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz4/full"}
		{link_sound "exhaust"			"vehicle/engine/pz4/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz4/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("MG34")
	}
	{on "zenite_terrain_fx" overload} ; // overwrites and stops dust fx on ground from firing main gun
	{on "update_multi_turret"
		{if work "aux_turret2"
			{ik_enable "aux_turret_2" 1}
		else
			{ik_enable "aux_turret_2" 0}
		}
		{inherited}
	}
}

{"stug3e tank"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz3/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz3/full"}
		{link_sound "exhaust"			"vehicle/engine/pz3/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz3"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
}

{"stug4 tank"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("MG34")
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz4/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz4/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz4/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz4/full"}
		{link_sound "exhaust"			"vehicle/engine/pz4/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz4"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "charger_hatch_open" overload
		{ani_play "open_l" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "close_l" 1.0 resume}
	}
}
{"stug4_late tank"
	("random_schurzen_50thoma")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("MG34")
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz4/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz4/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz4/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz4/full"}
		{link_sound "exhaust"			"vehicle/engine/pz4/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz4"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
}
{"stug4_last tank"
	("random_schurzen_78thoma") ;// late swinging type schurzen later, maybe
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("MG34")
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz4/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz4/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz4/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz4/full"}
		{link_sound "exhaust"			"vehicle/engine/pz4/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz4"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
}

{"m17_mgmc tank"
	("m3_halftrack_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	{on "add_weapon_sound" overload
		("M2HB_M45_Mount")
	}

	("multi_barrel_loop" flash(flash_gun_big) smoke(ejectsmoke_big) shell(shell_hmgun) weapon(mgun) head(0.070))

	{on "reload"
		{ani_play "reload_mgun" 1.0}
	}
	{on "reload_delay" overload
		("reload_time" args 30)	;// weapon reload time
	}
}

{"kht133 tank"
	("t26_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
	{on spawn
		("rand_cut_else" args "cooler1" "cooler2")
		{add_view "flamer_fire" "gun" "foresight1"}
	}
	{on "lights_on"
		{ani_play "headlight"}
		{tags add "lights_on"}
	}
	{on "lights_off"
		{if tagged "lights_on"
			{ani_play "headlight" -1}
			{tags remove "lights_on"}
		}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	("flame_weapon" args gun 45 1 40)
}

{"bt7_35 tank"
	("bt_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("DT")
	}
}
{"panzer4f1_vorpanzer tank"
	("pz4_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("MG34")
	}
}

{"ford_gpa_rus"
	("willys_mb_sound")
}

{"su76i tank"
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
	}
	{on fire "gun"
		{ani_play "fire1" +1 resume}
	}
}

{"isu122 tank"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DShK38")
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/is/start"}
		{link_sound "engine_stop"		"vehicle/engine/is/stop"}
		{link_sound "engine_idle"		"vehicle/engine/is/idle"}
		{link_sound "engine_full"		"vehicle/engine/is/full"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/is/"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open_right" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_right" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
}

{"su57 tank"
	("m3_halftrack_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm")
		("Cannon_Breech")
	}
	{on fire "gun"
		{ani_play "fire1"}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
}

{"t5 tank"
	("pz5_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_HV")
		("MG34")
	}
}

{"sdkfz7_1_unarmored"
	{on "add_weapon_sound" overload
		("2cm_Flakvierling")
	}
	("multi_barrel_loop" flash(tank_canon_fire_20_25_auto) smoke(smoke_zenit) shell(zenit_gilz) weapon(gun) head(0.200))

	{on "reload"
		{ani_play "reload" 1.0}
	}
	{on "reload_delay" overload
		("reload_time" args 9)		;// weapon reload time
	}

	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/gun/gun_horizontal"}
		{link_sound "rotate_gun" 		"vehicle/turret/gun/gun_vertical"}
		{link_sound "engine_start"		"vehicle/engine/sdkfz251/start"}
		{link_sound "engine_stop"		"vehicle/engine/sdkfz251/stop"}
		{link_sound "engine_idle"		"vehicle/engine/sdkfz251/idle"}
		{link_sound "engine_full"		"vehicle/engine/sdkfz251/full"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz251/exhaust"}
		{link_sound "move"				"vehicle/tracks/sdkfz251"}
	}
	{on "zenite_terrain_fx" overload} ; // overwrites and stops dust fx on ground from firing main gun
}

{"panzer2_flamm tank"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("MG34")
	}
	{on spawn
		{add_view "flamer_fire_tank" "gun" "foresight1"}
		{add_view "flamer_fire_tank" "gun1" "foresight2"}
		{tags add "vehicle_detect_motion"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	{on move on
		{delay 1.5{ani_play "moving" loop}}
	}
	{on move off
		{delay 1.0{ani_stop "moving"}}
	}
	("flame_weapon" args gun 60 1 40)
	("flame_weapon" args gun1 60 2 40)
	{on "update_lights"
		{if not bone "detail4" visible
			{bone hide "fxstop2"}
		else
			{bone show "fxstop2"}
		}
	}
}

;///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

{"jagdtiger tank"
	{on spawn
		{tags add "heavy_td"}
		{tags remove "medium_td"}
	}
}

{"sturmtiger tank"
	{on spawn
		{tags add "heavy_spg"}
		{tags remove "medium_td"}
	}
}

{"ferdinand tank"
	{on spawn
		{tags add "heavy_td"}
		{tags remove "medium_td"}
	}
}
{"ostwind tank"
	{on spawn
		{tags add "spaag"}
		{delay 0.1
			{tags remove "medium_tank"}
		}
	}
}
{"wirbelwind tank"
	{on spawn
		{tags add "spaag"}
		{delay 0.1
			{tags remove "medium_tank"}
		}
	}
}
{"kugelblitz tank"
	{on spawn
		{tags add "spaag"}
		{delay 0.1
			{tags remove "medium_tank"}
		}
	}
}
{"m16_mgmc tank"
	{on spawn
		{tags add "spaag"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"m17_mgmc tank"
	{on spawn
		{tags add "spaag"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"m13_mgmc tank"
	{on spawn
		{tags add "spaag"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"m15a1_mgmc tank"
	{on spawn
		{tags add "spaag"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"m3_gmc tank"
	{on spawn
		{tags add "light_td"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"m3a1_gmc tank"
	{on spawn
		{tags add "light_td"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"m4_mortar_carrier tank"
	{on spawn
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"m4a1_mortar_carrier tank"
	{on spawn
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"sdkfz251c_2 tank"
	{on spawn
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"t19_hmc tank"
	{on spawn
		{tags add "light_spg"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"t30_hmc tank"
	{on spawn
		{tags add "light_spg"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"sdkfz251d_22 tank"
	{on spawn
		{tags add "light_td"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"sdkfz234_3 tank"
	{on spawn
		{tags add "light_td"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"sdkfz234_4 tank"
	{on spawn
		{tags add "light_td"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"sdkfz234_2 tank"
	{on spawn
		{tags add "light_tank"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"sdkfz234_1 tank"
	{on spawn
		{tags add "spaag"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}

{"sdkfz8_flak18 tank"
	{on spawn
		{tags add "medium_td"}
		{delay 0.1
			{tags remove "apc"}
		}
	}
}
{"kettenkrad"
	{on spawn
		{tags add "moto"}
	}
}
{"kettenkrad_eng"
	{on spawn
		{tags add "moto"}
	}
}
;/*=========== MODDED Vehicles End ===========*/
