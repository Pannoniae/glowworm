{"tank"
					;/*-- Radio Controlled tank "if in range" check and script. --*/
					
	;{on "rc_check"
	;	{if tagged "not_in_range"
	;		{view start ally neutral "marker_signal_bad"}
	;		{view stop "marker_signal_good"}
	;		{damage_report "rc" "component/rc_not_in_range"}
	;		{delay 20 "not_in_range"
	;			{reset_manual_control}
	;			{chassis_work 0}
	;			{call "engine_off"}
	;			{weapon_work "explosive" 0}
	;			{weapon_work "gun" 0}
	;		}
	;		{delay 10 "not_in_range_timer"{damage_report "rc" "component/rc_timer"}}
	;	else tagged "in_range"
	;		{kill_delay "not_in_range"}
	;		{kill_delay "not_in_range_timer"}
	;		{damage_report "rc" "component/rc_in_range"}
	;		{delay 0.1 	
	;			{chassis_work 1}
	;			{call "engine_on"}
	;			{weapon_work "explosive" 1}
	;			{weapon_work "gun" 1}
	;		}
	;		{view stop "marker_signal_bad"}
	;		{view start ally neutral "marker_signal_good"}
	;	}
	;}
	
	
					;/*-- Components break and repair sounds. --*/
					
	{on break
		{if not tagged "exploded" ;//modules making sounds on break
			{start_sound "crush/medium/metal"}
				{if component "transmission"
					{tags add "trans_break"}
					{delay 0.7{start_sound "crush/medium/transmission_broken"}}
					{damage_report "transmission" "component/transmission_broken"}
				else component "trackleft"
					{start_sound "vehicle/tracks/brake"}
					{delay 0.65
					{start_sound "crush/medium/track_broken"}
					}
					{tags add "trackl_broken"}
				else component "trackright"
					{start_sound "vehicle/tracks/brake"}
					{delay 0.65
					{start_sound "crush/medium/track_broken"}
					}
					{tags add "trackr_broken"}
				else component "turret"
					{delay 0.7{start_sound "crush/medium/transmission_broken"}}
					{tags add "turret_brake"}
				else component "aux_turret"
					{delay 0.7{start_sound "crush/medium/transmission_broken"}}
					{tags add "auxturret_broken"}
				else component "aux_turret1"
					{delay 0.7{start_sound "crush/medium/transmission_broken"}}
					{tags add "auxturret1_broken"}
				else component "aux_turret2"
					{delay 0.7{start_sound "crush/medium/transmission_broken"}}
					{tags add "auxturret2_broken"}
				else component "aux_turret3"
					{delay 0.7{start_sound "crush/medium/transmission_broken"}}			
					{tags add "auxturret3_broken"}					
				else component "aux_turret4"
					{delay 0.7{start_sound "crush/medium/transmission_broken"}}		
					{tags add "auxturret4_broken"}
				else component "engine"
					{tags add "engine_brake"}
					{start_sound "crush/medium/engine_broken"}
					{spawn "tank_die_particle" "engine"}
					{view start "smoke1_1"}
					{set "smoke1" 1}
					{delay 30
					{view pause "smoke1_1"}
					{set "smoke1" 0}
					}
				else component "gun"
					{delay 0.35{start_sound "crush/medium/gun_jam"}}
					{tags add "gun_broken"}
				else component "gun1"
					{delay 0.35{start_sound "crush/medium/gun_jam"}}
					{tags add "gun1_broken"}
				else component "gun2"
					{delay 0.35{start_sound "crush/medium/gun_jam"}}
					{tags add "gun2_broken"}
				else component "gun3"
					{delay 0.35{start_sound "crush/medium/gun_jam"}}
					{tags add "gun3_broken"}
				}
		}
	}
	{on repair
		{if component "transmission"
			{tags remove "trans_break"}
		else component "trackleft"
			{start_sound "crush/medium/track_repaired"}
			{tags remove "trackl_broken"}
		else component "trackright"
			{start_sound "crush/medium/track_repaired"}
			{tags remove "trackr_broken"}
		else component "aux_turret"
			{tags remove "auxturret_broken"}
		else component "aux_turret1"
			{tags remove "auxturret1_broken"}
		else component "aux_turret2"
			{tags remove "auxturret2_broken"}
		else component "aux_turret3"
			{tags remove "auxturret3_broken"}
		else component "aux_turret4"
			{tags remove "auxturret4_broken"}
		else component "gun"
			{tags remove "gun_broken"}
		else component "gun1"
			{tags remove "gun1_broken"}
		else component "gun2"
			{tags remove "gun2_broken"}
		else component "gun3"
			{tags remove "gun3_broken"}
		}
	}
	
	
					;/*-- Fuel explosion script. --*/	
					
{on pierce sync ;// defines chances of explosion based on type of fuel, shell type and caliber.
	{if component "fuel" 
		{if not able "exploded"
			{if not tagged "diesel" ;// gasoline fuel explosion script.
				{if not stuff "auto"
					{if not stuff "shell size1"
						{if not stuff "heat_shell"
							{if stuff "shell"
								{if rand 0.3{call_synced "fuel_explode_check"}}
							else stuff "sap"
								{if rand 0.7{call_synced "fuel_explode_check"}}
							else stuff "ap"
								{if rand 0.1{call_synced "fuel_explode_check"}}
							else stuff "apc"
								{if rand 0.1{call_synced "fuel_explode_check"}}
							else stuff "apbc"
								{if rand 0.1{call_synced "fuel_explode_check"}}
							else stuff "apcbc"
								{if rand 0.1{call_synced "fuel_explode_check"}}
							else stuff "apcr"
								{if rand 0.07{call_synced "fuel_explode_check"}}
							else stuff "apds"
								{if rand 0.07{call_synced "fuel_explode_check"}}
							else stuff "hvap"
								{if rand 0.07{call_synced "fuel_explode_check"}}
							}
						else stuff "heat_shell"
						{if rand 0.7{call_synced "fuel_explode_check"}}
					}
				}
			}
			else tagged "diesel" ;// diesel fuel explosion script.
				{if not stuff "auto"
					{if not stuff "shell size1"
						{if not stuff "heat_shell"
							{if stuff "shell"
								{if rand 0.1{call_synced "fuel_explode_check"}}
							else stuff "sap"
								{if rand 0.5{call_synced "fuel_explode_check"}}
							else stuff "ap"
								{if rand 0.05{call_synced "fuel_explode_check"}}
							else stuff "apc"
								{if rand 0.05{call_synced "fuel_explode_check"}}
							else stuff "apbc"
								{if rand 0.05{call_synced "fuel_explode_check"}}
							else stuff "apcbc"
								{if rand 0.05{call_synced "fuel_explode_check"}}
							else stuff "apcr"
								{if rand 0.05{call_synced "fuel_explode_check"}}
							else stuff "apds"
								{if rand 0.05{call_synced "fuel_explode_check"}}
							else stuff "hvap"
								{if rand 0.05{call_synced "fuel_explode_check"}}
							}
						else stuff "heat_shell"
							{if rand 0.5{call_synced "fuel_explode_check"}}
						}
					}
				}
			}
		}
	}
}
	(define "fuel_exploding" ;// explosion FX and damage.
		{burn volume "%volume" fx "ex_fuel_tank" time 0.01 fake}
				{kill_crew}
				{if rand 0.05
					{components "ammo" break}
				}
				{if rand 0.7
					{components "body" break}
				}
		{start_sound "detonation/cook_off/ext_explosion"}
		{spawn "ex_fuel_tank"}
		{spawn "fire_shellhole"}
		{damage_report "fuel" "component/fuel_exploded"}
		{burn fx "smoke_fire_fuel_leak" time 7.5 fake}
		{blastwave c4 3 r0 4 r1 6}
		{fire radius 4 time 4 heating 5}
		{delay_ex 0
			{tear "piece_large_steel" bone "%volume" id "%volume"
				{delete}
			}
		}
	)

	{on "fuel_explode_check" ;// checking the volumes.
		{if volume "fuel1"
			{if not tagged "fuel1_explode"
				{tags add "fuel1_explode"}
				{delay 0.01
					{if tagged "fuel1_explode"
						("fuel_exploding" volume(fuel1))
					}
				}
			}
		else volume "fuel2"
			{if not tagged "fuel2_explode"
				{tags add "fuel2_explode"}
				{delay 0.01
					{if tagged "fuel2_explode"
						("fuel_exploding" volume(fuel2))
					}
				}
			}
		else volume "fuel"
			{if not tagged "fuel_explode"
				{tags add "fuel_explode"}
				{delay 0.01
					{if tagged "fuel_explode"
						("fuel_exploding" volume(fuel))
					}
				}
			}
		else volume "fuel3"
			{if not tagged "fuel3_explode"
				{tags add "fuel3_explode"}
				{delay 0.01
					{if tagged "fuel3_explode"
						("fuel_exploding" volume(fuel3))
					}
				}
			}
		else volume "fuel4"
			{if not tagged "fuel4_explode"
				{tags add "fuel4_explode"}
				{delay 0.01
					{if tagged "fuel4_explode"
						("fuel_exploding" volume(fuel4))
					}
				}
			}
		}
	}

}


					;/*-- Flammpanzer II external fuel tanks explosion script. --*/
					
{"panzer2_flamm" 
	{on pierce sync ;// the same check as fuel explosion script, L94
		{if volume "shieldfuel_1" ;// for left fuel tank
			{if not stuff "auto"
				{if not stuff "shell size1"
						{if not stuff "heat_shell"
							{if stuff "shell"
								{if rand 0.1{call_synced "flamingo_explosion_1"}}
							else stuff "sap"
								{if rand 0.5{call_synced "flamingo_explosion_1"}}
							else stuff "ap"
								{if rand 0.05{call_synced "flamingo_explosion_1"}}
							else stuff "apc"
								{if rand 0.05{call_synced "flamingo_explosion_1"}}
							else stuff "apbc"
								{if rand 0.05{call_synced "flamingo_explosion_1"}}
							else stuff "apcbc"
								{if rand 0.05{call_synced "flamingo_explosion_1"}}
							else stuff "apcr"
								{if rand 0.05{call_synced "flamingo_explosion_1"}}
							else stuff "apds"
								{if rand 0.05{call_synced "flamingo_explosion_1"}}
							else stuff "hvap"
								{if rand 0.05{call_synced "flamingo_explosion_1"}}
							}
						else stuff "heat_shell"
							{if rand 0.5{call_synced "flamingo_explosion_1"}}
						else 
							{call_synced "flamingo_hit_fuel"}
						}
				}
			}
		}
		{if volume "shieldfuel_2" ;// for right fuel tank
			{if not stuff "auto"
				{if not stuff "shell size1"
						{if not stuff "heat_shell"
							{if stuff "shell"
								{if rand 0.1{call_synced "flamingo_explosion_2"}}
							else stuff "sap"
								{if rand 0.5{call_synced "flamingo_explosion_2"}}
							else stuff "ap"
								{if rand 0.05{call_synced "flamingo_explosion_2"}}
							else stuff "apc"
								{if rand 0.05{call_synced "flamingo_explosion_2"}}
							else stuff "apbc"
								{if rand 0.05{call_synced "flamingo_explosion_2"}}
							else stuff "apcbc"
								{if rand 0.05{call_synced "flamingo_explosion_2"}}
							else stuff "apcr"
								{if rand 0.05{call_synced "flamingo_explosion_2"}}
							else stuff "apds"
								{if rand 0.05{call_synced "flamingo_explosion_2"}}
							else stuff "hvap"
								{if rand 0.05{call_synced "flamingo_explosion_2"}}
							}
						else stuff "heat_shell"
							{if rand 0.5{call_synced "flamingo_explosion_2"}}
						else 
							{call_synced "flamingo_hit_fuel"}
						}
				}
			}
		}
	}
	{on "flamingo_explosion_1" ;// defines FX and damage of the explosion, left fuel tank.
		{weapon_work "gun" 0}
		{burn volume "shieldfuel_1" fx "ex_fuel_tank" time 0.01 fake}
		{burn fx "smoke_fire_fuel_leak" time 25 fake}
		{start_sound "detonation/cook_off/ext_explosion"}
		{fire radius 4 time 2 heating 5}
		{delay_ex 0
			{tear "piece_large_steel" bone "shieldfuel_1" id "shieldfuel_1"
				{delete}
			}
			{tear "piece_large_steel" bone "b_hatch_l1" id "b_hatch_l1"
				{impulse up 5 2 cx 2 1 cy 2 1 cz 2 1 rnd_dir 3 1 com}
			}
			{tear "piece_large_steel" bone "b_hatch_l2" id "b_hatch_l2"
				{impulse up 4 2 cx 2 1 cy 2 1 cz 2 1 rnd_dir 3 1 com}
			}
		}
		{damage_report "shieldfuel_1" "component/left_ext_fuel_exploded"}
		{delay 4
			{damage_report "aux_turret1" "component/left_flamethrower_broken"}
		}
	}
	{on "flamingo_explosion_2" ;// defines FX and damage of the explosion, right fuel tank.
		{weapon_work "gun1" 0}
		{burn volume "shieldfuel_2" fx "ex_fuel_tank" time 0.01 fake}
		{burn fx "smoke_fire_fuel_leak" time 25 fake}
		{start_sound "detonation/cook_off/ext_explosion"}
		{fire radius 4 time 2 heating 5}
		{delay_ex 0
			{tear "piece_large_steel" bone "shieldfuel_2" id "shieldfuel_2"
				{delete}
			}
			{tear "piece_large_steel" bone "b_hatch_r1" id "b_hatch_r1"
				{impulse up 5 2 cx 2 1 cy 2 1 cz 2 1 rnd_dir 3 1 com}
			}
			{tear "piece_large_steel" bone "b_hatch_r2" id "b_hatch_r2"
				{impulse up 4 2 cx 2 1 cy 2 1 cz 2 1 rnd_dir 3 1 com}
			}
		}
		{damage_report "shieldfuel_2" "component/right_ext_fuel_exploded"}
		{delay 4
			{damage_report "aux_turret2" "component/right_flamethrower_broken"}
		}
	}
	{on "flamingo_hit_fuel"
		{burn fx "smoke_fire_fuel_leak" time 10 fake}
	}
}

{"flame_thrower" ;// flamers exploding on hit.
	{on pierce sync
		{if volume "fuel"
			{if rand 0.65
				{if not stuff_filled "fuel" 0
					{call_synced "explosion_flamer"}
					{tags add "exploded_flamer"}
				}
			}
		}
	}
	{on "explosion_flamer"
		{if not tagged "exploded_flamer"
			{burn volume "fuel" fx "ex_fuel_tank" time 0.01 fake}
			{spawn "flamer_die"}
			{spawn "ex_fuel_tank"}
			{spawn "fire_shellhole"}
			{blastwave c4 2 r0 4 r1 4}
			{fire radius 4 time 4 heating 5}
			{tear "piece_large_steel" bone "fuel" id "fuel"
				{delete}
			}
		}
	}
}

{"diesel"	;// alternate fuel type
	{on spawn
		{tags add "add_exhaustview"}
		{tags add "diesel"} ;// needed for different fuel types having different explosion chances.
	}
	{on "add_exhaustview" overload
		{add_view	"exhaust_dark_big_diesel"		"exhaust"			   "FXsmoke1"} ;// engine exhaust
		{add_view	"exhaust_dark_big_diesel"		"exhaust"			   "FXsmoke2"} ;// engine exhaust
		;{add_view	"exhaust_dark_small2_diesel"	"exhaust2"			   "FXsmoke1"} ;// idle exhaust
		;{add_view	"exhaust_dark_small2_diesel"	"exhaust2"			   "FXsmoke2"} ;// idle exhaust
		{add_view	"exhaust_dark_small2"			"exhaust2"			   "FXsmoke1"} ;// idle exhaust
		{add_view	"exhaust_dark_small2"			"exhaust2"			   "FXsmoke2"} ;// idle exhaust
	}
}


					;/*-- BT exhaust flash FX. --*/
					
(define "m17t"
	{on "add_exhaustview"
		{add_view	"tank_canon_fire_20_25_auto"				"exhaust3"			   "FXsmoke1"} ;// engine exhaust
		{add_view	"tank_canon_fire_20_25_auto"				"exhaust3"			   "FXsmoke2"} ;// engine exhaust
	}
	{on "exhaust_flash"
		{if "engine_on"	
		{if not "flashing"
			{set "flashing" 1}		
			{view start "exhaust3"}
			{start_sound "weapon/shot/cannon/s1/d1/Shared/Cannon_37to40mm"}		
			{delay 0.2
				{view pause "exhaust3"}
				{if rand 0.35
					{delay 0.55 0.1
						{view start "exhaust3"}
						{start_sound "weapon/shot/cannon/s1/d1/Shared/Cannon_37to40mm"}		
						{delay 0.1
							{view pause "exhaust3"}
						}
						{if rand 0.35
							{delay 0.4 0.05
								{view start "exhaust3"}
								{start_sound "weapon/shot/cannon/s1/d1/Shared/Cannon_37to40mm"}		
								{delay 0.1
									{view pause "exhaust3"}
								}
								{if rand 0.40
									{delay 0.5 0.1
										{view start "exhaust3"}
										{start_sound "weapon/shot/cannon/s1/d1/Shared/Cannon_37to40mm"}		
										{delay 0.1
											{view pause "exhaust3"}
										}						
									}
								}							
							}
						}
					}
				}
			}
			{delay 17 0.5 {set "flashing" 0}}
		}
		}
	}
	{on "engine_on"
		{delay 1.65{call "exhaust_flash"}}
	}
	{on move on
		{call "exhaust_flash"}
	}
	{on "exhaust_on"	
		{call "exhaust_flash"}
	}
)
{"bt2 tank" 			("m17t")}
{"bt2_da2 tank" 		("m17t")}
{"bt5 tank" 			("m17t")}
{"bt5_fin tank" 		("m17t")}
{"bt7 tank" 			("m17t")}
{"bt7a tank" 			("m17t")}
{"panzer742r tank" 		("m17t")}
{"bt42 tank" 			("m17t")}
{"bt7_35 tank" 			("m17t")}


					;/*-- Smoke grenades explosion FX. --*/
					
{"smoke nwg"
	{on spawn
		{link_sound "burn_down" "detonation/grenade_wp/burn_down/"}
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop" "detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}	
	}
	{on bullet_hit
		{if not able "exploded"
			{if volume "smgr_1"
				{if not "no_more_smoke_for_you_1"
					{if stuff "pierce"
						{if rand 0.5 
							{set "no_more_smoke_for_you_1" 1}
							{bone hide "smoke_shot4_cap"}
							{bone hide "smoke_shot5_cap"}
							{bone hide "smoke_shot6_cap"}
							{start_sound "detonation/he_size1/bkg/" use_position}
							{delay 1
								{play_sound "burn_down"}
								{play_sound "smoke_loop"}
							}
							{spawn "ex_wp_size1"}
							{delay 60
								{stop_sound "smoke_loop"}
								{play_sound "smoke_end"}
							}
						}
					}
				}
			else volume "smgr_2"
				{if not "no_more_smoke_for_you_2"
					{if stuff "pierce"
						{if rand 0.5 
							{set "no_more_smoke_for_you_2" 1}
							{bone hide "smoke_shot1_cap"}
							{bone hide "smoke_shot2_cap"}
							{bone hide "smoke_shot3_cap"}
							{start_sound "detonation/he_size1/bkg/" use_position}
							{delay 1
								{play_sound "burn_down"}
								{play_sound "smoke_loop"}
							}
							{spawn "ex_wp_size1"}
							{delay 60
								{stop_sound "smoke_loop"}
								{play_sound "smoke_end"}
							}
						}
					}
				}		
			}
		}
	}
	{on "deploy_smoke" overload	 				;// UI button to deploy vehicle smoke screen
		{if not "no_more_smoke_for_you_2"
			{if not "no_more_smoke_for_you_1"
				{if operatable
					{if work "body"
						{call "smoke_screen"}
					}
				}
			}
		}
	}
}

					;/*-- Radio Controlled tanks FX and tags.  --*/
					
{"rc_parent"
	{on spawn{tags add "rc_parent"}}
}
{"rc_child"
	{on spawn
		{tags add "rc_child"}
		{tags add "in_range"}
		{add_view	"marker_signal_good"			"marker_signal_good"			"basis" not_manual not_scenario}
		{add_view	"marker_signal_bad"				"marker_signal_bad"				"basis" not_manual not_scenario}
		{view start ally neutral "marker_signal_good"}
	}
}

					;/*-- Soviet smoke generator. --*/
					
	{"smoke_generator"
		{on "smoke_screen_toggle"
			{if not "toggle_delay"
				{if not "cooldown"
					{if "smoke_screen_on"
						{call_synced "smoke_screen_off"}
					else
						{call_synced "smoke_screen_on"}
					}
				}
			}
			{set "toggle_delay" 1}			;// stops accidental double click of UI button
			{delay 1 {set "toggle_delay" 0}}
		}
		{on "smoke_screen_on" ;// if enabled.
			{set "smoke_screen_on" 1}  
			{play_sound "detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop" 1}
			{with_linked_entity "smokegenerator"
				{if not "smoke_added"
					{add_view "smoke_cover-up_norm_generator" "smoke_screen" "root"}
					{add_view "smoke_cover-up_big" "smoke_screen_big" "root"}

				}
				{if not "cooldown"
					{view start "smoke_screen"}
					{view start "smoke_screen_big"}
				}
			}
			{with_linked_entity "smokegenerator1"
				{if not "smoke_added"
					{add_view "smoke_cover-up_norm_generator" "smoke_screen1" "root"}
					{add_view "smoke_cover-up_big" "smoke_screen_big1" "root"}
				}
				{if not "cooldown"
					{view start "smoke_screen1"}
					{view start "smoke_screen_big1"}
				}
			}
			{set "smoke_added" 1}
			{delay 120
				{set "cooldown" 1}
				{set "smoke_screen_on" 0}
				{call_synced "smoke_screen_off"}				
				{delay 600 ;// edit the cooldown of the ability here.
					{set "cooldown" 0}
				}
			}
		}
		{on move on ;// spawning smokescreens on move.
			{if "smoke_screen_on"
				{if not "cooldown"
					{call_synced "spawn_smoke"}
					{call_synced "spawn_smoke_vol"}
				}
			}		
		}
		{on "smoke_screen_off" ;// if disabled.
			{set "smoke_screen_on" 0}
			{play_sound "detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
			{stop_sound "detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
			{set "cooldown" 1}
			{delay 600 ;// edit the cooldown of the ability here.
				{set "cooldown" 0}
			}
			{with_linked_entity "smokegenerator"
				{view stop "smoke_screen"}
				{view stop "smoke_screen_big"}
			}
			{with_linked_entity "smokegenerator1"
				{view stop "smoke_screen1"}
				{view stop "smoke_screen_big1"}
			}
		}
		{on "spawn_smoke" ;// smoke FX.
			{if "smoke_screen_on"
				{if not "cooldown"
					{spawn "placer" "basis"
						{add_view "smoke_cover-up_big" "smoke_screen_big" "root"}
						{view start "smoke_screen_big"}
						{delay 30
							{hide 1}
						}
					}
					{delay 3
						{call_synced "spawn_smoke"}
					}
				}
			}
		}

		{on "spawn_smoke_vol" ;// actual smoke volumes.
			{if "smoke_screen_on"
				{if not "cooldown"
				(define "spawn_volume_sg"
					{spawn "smoke_volume_%0" "smokegenerator" offset %1 %2 0
						{delay %3 {hide 1}}
					}
				)
				(define "spawn_volume_sg1"
					{spawn "smoke_volume_%0" "smokegenerator1" offset %1 %2 0
						{delay %3 {hide 1}}
					}
				)
				{spawn "smoke_volume_cylinder" "smokegenerator"
					{delay 26
						{hide 1}
					}
				}
				{spawn "smoke_volume_cylinder" "smokegenerator1"
					{delay 26
						{hide 1}
					}
				}
				{delay 1.5
					("spawn_volume_sg" args cylinder 120 0 26)
					("spawn_volume_sg" args cylinder -120 0 26)
					("spawn_volume_sg" args cylinder 0 120 26)
					("spawn_volume_sg" args cylinder 0 -120 26)
					("spawn_volume_sg" args cylinder 83 83 26)
					("spawn_volume_sg" args cylinder -83 -83 26)
					("spawn_volume_sg" args cylinder -83 83 26)
					("spawn_volume_sg" args cylinder 83 -83 26)
					("spawn_volume_sg" args cylinder_sm 220 0 26)
					("spawn_volume_sg" args cylinder_sm -220 0 26)
					("spawn_volume_sg" args cylinder_sm 0 220 26)
					("spawn_volume_sg" args cylinder_sm 0 -220 26)
					("spawn_volume_sg1" args cylinder 120 0 26)
					("spawn_volume_sg1" args cylinder -120 0 26)
					("spawn_volume_sg1" args cylinder 0 120 26)
					("spawn_volume_sg1" args cylinder 0 -120 26)
					("spawn_volume_sg1" args cylinder 83 83 26)
					("spawn_volume_sg1" args cylinder -83 -83 26)
					("spawn_volume_sg1" args cylinder -83 83 26)
					("spawn_volume_sg1" args cylinder 83 -83 26)
					("spawn_volume_sg1" args cylinder_sm 220 0 26)
					("spawn_volume_sg1" args cylinder_sm -220 0 26)
					("spawn_volume_sg1" args cylinder_sm 0 220 26)
					("spawn_volume_sg1" args cylinder_sm 0 -220 26)
				}
				{delay 3
					{call_synced "spawn_smoke_vol"} ;// looped.
				}
				}
			}
		}
	}


					;/*-- Borgward 450kg. bomb script. --*/
					
{"borgward"
	{on spawn
		{tags add "borgward"}
	}
	{on pierce sync
		{if volume "body3"
			{if stuff "shell size1"	
				{if rand 0.3{call_synced "explosion"}}
			else stuff "shell size2"
							{call_synced "explosion"}
			else stuff "shell size3"
							{call_synced "explosion"}
			else stuff "shell size4"
							{call_synced "explosion"}
			else
				{if rand 0.2{call_synced "explosion"}}
			}
		}
	}
    {on "explosion"
		{call_synced "cut_parts"}
		{delay 0.25{delete}}
		{blastwave c4 16 r0 16 r1 32 offset 0 0 75}
		{blastwave c4 4 r0 32 r1 64 offset 0 0 75}
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{spawn "ex_he_size7" "basis"}
		{start_sound "detonation/explosion_vehicle/bkg/"}
		{if terrain_fx "snow"
			{spawn "ex_he_size7_snow" "basis"}
		else terrain_fx "ice"
			{spawn "ex_he_size7_snow" "basis"}
		}
		{spawn "shellhole_dead_tank2" "basis" terrain_texmod}
        {spawn "crater_massive" "basis"}
	}
	{on fire "explosive" overload
		{delay 0.1
		{spawn "bomb_borgward" "bomb_spawner" x}
		{damage_report "timer" "component/bomb_timer"}
		{volumes "body3" disable all}
		}
	}
}
{"entity_bomb"
	{on spawn
		{delay 40 "timer"
			{call_synced "explosion"}
		}
	}
	{on pierce sync
		{if volume "body3"
			{if stuff "shell size1"
				{if rand 0.5
					{kill_delay "timer"} ;// kills the delay to prevent multiple explosions.
					{call_synced "explosion"}
				}
			else stuff "shell size2"
					{kill_delay "timer"}
					{call_synced "explosion"}
			else stuff "shell size3"
					{kill_delay "timer"}
					{call_synced "explosion"}
			else stuff "shell size4"
					{kill_delay "timer"}
					{call_synced "explosion"}
			else
				{if rand 0.2
					{kill_delay "timer"}
					{call_synced "explosion"}
				}
			}
		}
	}
	{on "explosion"
		{delay 0.1{delete}}
		{blastwave c4 20 r0 20 r1 40 offset 0 0 75}
		{blastwave c4 4 r0 50 r1 80 offset 0 0 75}
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{spawn "ex_he_size7" "basis"}
		{start_sound "detonation/he_size5/"}
		{if terrain_fx "snow"
			{spawn "ex_he_size7_snow" "basis"}
		else terrain_fx "ice"
			{spawn "ex_he_size7_snow" "basis"}
		}
		{spawn "shellhole_dead_tank2" "basis" terrain_texmod}
		{spawn "crater_massive" "basis"}
	}
}

					;/*-- Tank horn script. --*/

	(define "horn"
		{on "horn"
			{if not "toggle_delay"
				{start_sound "crush/medium/horn"}
			}
			{set "toggle_delay" 1}			;// stops spamming the fuck out of it
			{delay 2.6 {set "toggle_delay" 0}}
		}
	)
	{"t26_31 tank"			("horn")}
	{"t26_32 tank"			("horn")}
	{"t26_33 tank"			("horn")}
	{"t26_38 tank"			("horn")}
	{"t26_39 tank"			("horn")}
	{"t37a tank"			("horn")}
	{"zis30 tank" 			("horn")}
	{"kht27 tank" 			("horn")}
	{"t27 tank"				("horn")}
	{"bt7 tank"				("horn")}
	{"bt7m tank"			("horn")}
	{"t3457_41 tank"		("horn")}
	{"t3457_43 tank"		("horn")}
	{"t3476_42 tank"		("horn")}
	{"t3457_43 tank"		("horn")}
	{"t3457_43_flame tank"	("horn")}
	{"is1_43 tank"			("horn")}
	{"is2_43 tank"			("horn")}
	{"is2_44 tank"			("horn")}
	{"is2_45 tank"			("horn")}
	{"isu122s tank"			("horn")}
	{"isu152 tank"			("horn")}
	{"kv1_39 tank"			("horn")}
	{"kv1_40 tank"			("horn")}
	{"kv1_40e tank"			("horn")}
	{"kv1_41 tank"			("horn")}
	{"kv1_39 tank" 			("horn")}
	{"kv8 tank" 			("horn")}
	{"kv1s tank" 			("horn")}
	{"kv2_40 tank" 			("horn")}
	{"kv85 tank" 			("horn")}
	{"smk tank" 			("horn")}
	{"su100y tank" 			("horn")}
	{"su152 tank" 			("horn")}
	{"kv1s tank" 			("horn")}
	{"t35 tank" 			("horn")}
	{"su5_2 tank" 			("horn")}
	{"t3485_44 tank" 		("horn")}
	{"t3485_44_flame tank" 	("horn")}
	{"t3485_44a tank" 		("horn")}
	{"t3485_44a_flame tank" ("horn")}
	{"m3_lee_rus tank" 		("horn")}
	{"m3_lee tank" 			("horn")}
	{"bt7a tank" 			("horn")}
	{"kht26 tank" 			("horn")}
	{"kht130 tank" 			("horn")}
	{"su26 tank" 			("horn")}
	{"su76 tank" 			("horn")}
	{"t3485_43 tank" 		("horn")}
	{"kv1_42 tank" 			("horn")}
	{"kv8s tank" 			("horn")}
	{"bt7_35 tank" 			("horn")}
	

					;/*-- Minimap icons system based on tags. --*/
					;// doesn't work actually but I think it may be usefull.
					
	{"td heavy -turret"
		{on spawn
			{tags add "heavy_td"}
			{if tagged "medium_td"
				{tags remove "medium_td"}
			}
			{if tagged "light_td"
				{tags remove "light_td"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
		}
	}
	{"td light -turret"
		{on spawn
			{tags add "light_td"}
			{if tagged "medium_td"
				{tags remove "medium_td"}
			}
			{if tagged "heavy_td"
				{tags remove "heavy_td"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
		}
	}
	{"td medium -turret"
		{on spawn
			{tags add "medium_td"}
			{if tagged "light_td"
				{tags remove "light_td"}
			}
			{if tagged "heavy_td"
				{tags remove "heavy_td"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
		}
	}
	{"spg medium"
		{on spawn
			{tags add "medium_spg"}
			{if tagged "light_spg"
				{tags remove "light_spg"}
			}
			{if tagged "heavy_spg"
				{tags remove "heavy_spg"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
		}
	}
	{"spg heavy"
		{on spawn
			{tags add "heavy_spg"}
			{if tagged "medium_spg"
				{tags remove "medium_spg"}
			}
			{if tagged "light_spg"
				{tags remove "light_spg"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
		}
	}
	{"spg light"
		{on spawn
			{tags add "light_spg"}
			{if tagged "heavy_spg"
				{tags remove "heavy_spg"}
			}
			{if tagged "medium_spg"
				{tags remove "medium_spg"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
		}
	}
	{"light -turret detect_artillery"
		{on spawn
			{tags add "light_spg"}
			{if tagged "heavy_spg"
				{tags remove "heavy_spg"}
			}
			{if tagged "medium_spg"
				{tags remove "medium_spg"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
		}
	}
	{"truck tractor"
		{on spawn
			{tags add "truck"}
			{if tagged "heavy_spg"
				{tags remove "heavy_spg"}
			}
			{if tagged "medium_spg"
				{tags remove "medium_spg"}
			}
			{if tagged "light_spg"
				{tags remove "light_spg"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
		}
	}
	{"tank heavy turret"
		{on spawn
			{tags add "heavy_tank"}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
		}
	}
	{"tank light turret"
		{on spawn
			{tags add "light_tank"}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
		}
	}
	{"tank medium turret"
		{on spawn
			{tags add "medium_tank"}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
		}
	}
	{"tank halftrack wheeled"
		{on spawn
			{tags add "apc"}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
		}
	}
	{"tank wheeled"
		{on spawn
			{tags add "apc"}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
		}
	}
	{"tank halftrack"
		{on spawn
			{tags add "apc"}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
		}
	}
	{"armored_car -turret"
		{on spawn
			{tags add "apc"}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
		}
	}
	{"tank halftrack automatic"
		{on spawn
			{tags add "spaag"}
			{if tagged "apc"
				{tags remove "apc"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
		}
	}
	{"tank automatic"
		{on spawn
			{tags add "spaag"}
			{if tagged "apc"
				{tags remove "apc"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
		}
	}
	{"truck automatic"
		{on spawn
			{tags add "spaag"}
			{if tagged "apc"
				{tags remove "apc"}
			}
			{if tagged "truck"
				{tags remove "truck"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
		}
	}
	{"rocket"
		{on spawn
			{if tagged "apc"
				{tags remove "apc"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
		}
	}
	{"katusha"
		{on spawn
			{if tagged "apc"
				{tags remove "apc"}
			}
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
		}
	}
	{"mine_exploder"
		{on spawn
			{if tagged "light_tank"
				{tags remove "light_tank"}
			}
			{if tagged "heavy_tank"
				{tags remove "heavy_tank"}
			}
			{if tagged "medium_tank"
				{tags remove "medium_tank"}
			}
		}
	}


					;/*-- Frontline fake flags tag. --*/
	{"frontline_tagger"
		{on spawn {tags add "fake_flag"}}
	}