	(define "stuff_view"
		{add_view "%item" "stuff_view_%item" "%bone"}
		{view show "stuff_view_%item"}
		{view start "stuff_view_%item"}
		{bone hide "gun_back"}
	)	
	(define "stuff_view_arrow"
		{add_view "%item" "stuff_view" "%bone"}
		{view show "stuff_view_arrow"}
		{view start "stuff_view_arrow"}
		{bone hide "gun_back"}
	)
	(define "stuff_view_off_h"
		{view pause "stuff_view"}
		{view hide "stuff_view"}
		{view stop "stuff_view"}
		{view pause "stuff_view_arrow"}
		{view hide "stuff_view_arrow"}
		{view stop "stuff_view_arrow"}
		{bone show "gun_back"}
	)
	(define "stuff_view_arrow_off"
		{view pause "stuff_view_arrow"}
		{view hide "stuff_view_arrow"}
		{view stop "stuff_view_arrow"}
	)
	(define "gun_motocrew_stuff"
		{on %event
			{if not operatable
			else
				{if crew_in_place "driver"
					{call "stuff_view_off"}
					{call "stuff_view_all_off"}
					{with_linked_entity "driver"	
						{delay 0.05 
							("stuff_view" item(%item) bone(right_hand))
						}
					}
				}
			}
		}
	) 	
	(define "motocrew_stuff_pistol_view"
		{"%name"
			("gun_motocrew_stuff" item(%item) event(operatable on))
			("gun_motocrew_stuff" item(%item) event(crew in))
		
		}
	)
	(define "motocrew_stuff_view"
		{"%name"
			{on spawn
				{if not operatable
					("stuff_view" item(%item) bone(rifle))
				else
					{call "stuff_view_off"}
					{call "stuff_view_all_off"}
				}
			}
			{on operatable off
					("stuff_view" item(%item) bone(rifle))
			}
			("gun_motocrew_stuff" item(%item) event(operatable on))
			("gun_motocrew_stuff" item(%item) event(crew in))
		
		}
	)
;======main preset weapon type
(define "gun_motocrew_anima"
{"%name"
	{on operatable on
		{if not operatable
		else
			{if crew_in_place "driver"
				{with_linked_entity "driver"	
					{delay 0.1 
						{ani_play "%take" 0.5}
						{add_view "%flash" "flashbarrel_moto" "right_hand"}
					}
				}
			}
		}
	}
	{on fire "gun"
		{with_linked_entity "driver"	
				{if rand 0.13 
					{talk "in_action"}
				}
			{view show	"flashbarrel_moto"}
			{view start	"flashbarrel_moto"}
			{ani_play "%aim"}
			{delay 0.2
				{view pause "flashbarrel_moto"}
			}
			{delay 0.5 {ani_play "%reload" %rs}}
		}
		{movement_limit slow}
		{weapon_work "gun" 0}
		{ik_enable "ik_right" 0}
		{ik_enable "ik_left" 0}
		{ik_enable "ik_centr" 0}
		{delay %rt
			{weapon_work "gun" 1}
			{ik_enable "ik_right" 1}
			{ik_enable "ik_left" 1}
			{ik_enable "ik_centr" 1}
			{movement_limit fast}
		}
	}
	{on ik begin "ik_centr"
		{with_linked_entity "driver"	
			{if not dead 
			{ani_stop "%aim_right"}
			{ani_stop "%aim_left"}
			{ani_play "%aim"}
			}
		}
	}
	{on ik begin "ik_right"
		{with_linked_entity "driver"	
			{if not dead
				{ani_stop "%aim"}
				{ani_stop "%aim_left"}
				{ani_play "%aim_right" 0.5}
			}
		}
	}
	{on ik begin "ik_left"
		{with_linked_entity "driver"	
			{if not dead
				{ani_stop "%aim"}
				{ani_stop "%aim_right"}
				{ani_play "%aim_left" 0.5}
			}
		}
	}
	{on "anima_move_update"
		{if not tagged "dead"
			{if not tagged "melee"
			{if tagged "move"
				{if velocity 26 ; > 26 km/h
					{with_linked_entity "driver"	
						{if rand 0.5
							{if not dead {ani_play "%move_fast" 0.5}}
							else
							{if not dead {ani_play "%move_fast1" 0.5}}
						}
					}
					else velocity 12 ; > 12 km/h
					{with_linked_entity "driver"	
						{if not dead {ani_play "%move" 0.5}}
					}
					else velocity 0 ; > 0  km/h
					{with_linked_entity "driver"	
						{if not dead {ani_play "%move" 0.5}}
					}
				}
			}
			}
		}
	}
}
)

;===================================================================пресет для пистолетов
	("gun_motocrew_anima"
		name(moto_weapon_pistol)
		flash(flash_gun_small)	
		;====anima
			rt(4.5) rs(0.5) ;reload time\ anima reload speed
			take(moto_driver_take_pistol)
			aim(moto_driver_pistol_aim)	aim_right(moto_driver_pistol_aim_right)	aim_left(moto_driver_pistol_aim_left)	
			reload(stand_reload_pistol) move(moto_driver_pistol) move_fast(moto_driver_pistol_fast) move_fast1(pose_moto_driver)
		;========================
	)
;===================================================================пресет для револьверов
	("gun_motocrew_anima"
		name(moto_weapon_pistol_rev)
		flash(flash_gun_small)	
		;====anima
			rt(0.3) rs(0.5) ;reload time\ anima reload speed
			take(moto_driver_take_pistol)
			aim(moto_driver_pistol_aim)	aim_right(moto_driver_pistol_aim_right)	aim_left(moto_driver_pistol_aim_left)	
			reload(stand_reload_pistol) move(moto_driver_pistol) move_fast(moto_driver_pistol_fast) move_fast1(pose_moto_driver)
		;========================
	)
;===================================================================пресет для винтовок
	("gun_motocrew_anima"
		name(moto_weapon_rifle)
		flash(flash_gun_small)	
		;====anima
			rt(0.35) rs(0.55) ;reload time\ anima reload speed
			take(moto_driver_take_rifle)
			aim(moto_driver_aim)	aim_right(moto_driver_aim_right)	aim_left(moto_driver_aim_left)	
			reload(stand_reload_gun) move(moto_driver_new) move_fast(moto_driver_new_fast) move_fast1(pose_moto_driver)
		;========================
	)


;=========================|PISTOL
("motocrew_stuff_pistol_view" name(harley-2wheels)    item(thompson_m1928a1_30)) ; 

;=========================|RIFLE
;("motocrew_stuff_view" name(harley-2wheels2)  	 item(garand)) ;  

{"moto_battle"
	{on spawn
		{physics_work 0}
		{call "init_gun"}
	}
	{on "stuff_view_off"
		("stuff_view_off_h")
	}
	{on "stuff_view_arrow_off"
		("stuff_view_arrow_off")
	}
	{on "stuff_view_all_off"
		("off_stuff_view_all_item")
	}
	{on "break_all" overload
		{with_linked_entity "driver"
			{call "stuff_view_off"}
		}
	}
	{on "die"
		{with_linked_entity "driver"	
			{call "in_ani_stop"}
			{call "stuff_view_off"}
			{call "stuff_view_arrow_off"}
			
		}
	}
	{on "dead"
		{if not tagged "dead"
			{with_linked_entity "driver"	
				{call "in_ani_stop"}
				{call "stuff_view_off"}
			}
			{call "stuff_view_arrow_off"}
		}
	}
}

;=======================================RELOADS for one more shoots
{"motocrew_30_shooter_smg"
	{on spawn
		{tags add "r1 r2 r3 r4 r5 r6"}
	}
	{on fire "gun" overload
		{with_linked_entity "driver"	
			{if rand 0.13 
				{talk "in_action"}
			}
			{ani_play "moto_driver_pistol_aim"}
			{view show	"flashbarrel_moto"}
			{view start	"flashbarrel_moto"}
			{delay 0.2
				{view pause "flashbarrel_moto"}
			}
		}
		{delay 0.1
			{if tagged "r6"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r6"}
				{delay 0.5}
			else tagged "r5"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r5"}
				{delay 0.5}
			else tagged "r4"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r4"}
				{delay 0.5}
		    else tagged "r3"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r3"}
				{delay 0.5}
			else tagged "r2"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r2"}
				{delay 0.5}
			else tagged "r1"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r1"}
				{delay 0.5}
				{tags add "r1 r2 r3 r4 r5 r6"}
				{weapon_work "gun" 0}
				{delay 1 {weapon_work "gun" 1}}
				
			}
		}
		{movement_limit slow}
		{ik_enable "ik_right" 0}
		{ik_enable "ik_left" 0}
		{ik_enable "ik_centr" 0}
		{delay 0.2
			{ik_enable "ik_right" 1}
			{ik_enable "ik_left" 1}
			{ik_enable "ik_centr" 1}
			{movement_limit fast}
		}
	}
}


{"motocrew_10_shooter_pistol"
	{on spawn
		{tags add "r1 r2 r3 r4 r5 r6 r7 r8 r9 r10"}
	}
	{on fire "gun" overload
		{with_linked_entity "driver"	
			{if rand 0.13 
				{talk "in_action"}
			}
			{ani_play "moto_driver_pistol_aim"}
			{view show	"flashbarrel_moto"}
			{view start	"flashbarrel_moto"}
			{delay 0.2
				{view pause "flashbarrel_moto"}
			}

		}
		{delay 0.1
			{if tagged "r10"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r10"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
				else tagged "r9"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r9"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
				else tagged "r8"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r8"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r7"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r7"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r6"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r6"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r5"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r5"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
				else tagged "r4"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r4"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
				else tagged "r3"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r3"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
				else tagged "r2"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r2"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r1"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_reload" 0.15}
				}
				{tags remove "r1"}
				{tags add "r1 r2 r3 r4 r5 r6 r7 r8 r9 r10"}
				{weapon_work "gun" 0}
				{delay 6 {weapon_work "gun" 1}}
				
			}
		}
		{movement_limit slow}
		{ik_enable "ik_right" 0}
		{ik_enable "ik_left" 0}
		{ik_enable "ik_centr" 0}
		{delay 0.2
			{ik_enable "ik_right" 1}
			{ik_enable "ik_left" 1}
			{ik_enable "ik_centr" 1}
			{movement_limit fast}
		}
	}
}


{"motocrew_8_shooter_pistol"
	{on spawn
		{tags add "r1 r2 r3 r4 r5 r6 r7 r8"}
	}
	{on fire "gun" overload
		{with_linked_entity "driver"	
			{if rand 0.13 
				{talk "in_action"}
			}
			{ani_play "moto_driver_pistol_aim"}
			{view show	"flashbarrel_moto"}
			{view start	"flashbarrel_moto"}
			{delay 0.2
				{view pause "flashbarrel_moto"}
			}

		}
		{delay 0.1
			{if tagged "r8"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r8"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r7"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r7"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r6"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r6"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r5"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r5"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
				else tagged "r4"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r4"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
				else tagged "r3"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r3"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
				else tagged "r2"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r2"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r1"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_reload" 0.15}
				}
				{tags remove "r1"}
				{tags add "r1 r2 r3 r4 r5 r6 r7 r8"}
				{weapon_work "gun" 0}
				{delay 6 {weapon_work "gun" 1}}
				
			}
		}
		{movement_limit slow}
		{ik_enable "ik_right" 0}
		{ik_enable "ik_left" 0}
		{ik_enable "ik_centr" 0}
		{delay 0.2
			{ik_enable "ik_right" 1}
			{ik_enable "ik_left" 1}
			{ik_enable "ik_centr" 1}
			{movement_limit fast}
		}
	}
}

{"motocrew_6_shooter_pistol"
	{on spawn
		{tags add "r1 r2 r3 r4 r5 r6"}
	}
	{on fire "gun" overload
		{with_linked_entity "driver"	
			{if rand 0.13 
				{talk "in_action"}
			}
			{ani_play "moto_driver_pistol_aim"}
			{view show	"flashbarrel_moto"}
			{view start	"flashbarrel_moto"}
			{delay 0.2
				{view pause "flashbarrel_moto"}
			}
		}
		{delay 0.1
			{if tagged "r6"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r6"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r5"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r5"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r4"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r4"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r3"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r3"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r2"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_recoil" 0.5}
				}
				{tags remove "r2"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r1"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_pistol_reload" 0.15}
				}
				{tags remove "r1"}
				{tags add "r1 r2 r3 r4 r5 r6"}
				{weapon_work "gun" 0}
				{delay 6 {weapon_work "gun" 1}}
			}
		}
		{movement_limit slow}
		{ik_enable "ik_right" 0}
		{ik_enable "ik_left" 0}
		{ik_enable "ik_centr" 0}
		{delay 0.5
			{ik_enable "ik_right" 1}
			{ik_enable "ik_left" 1}
			{ik_enable "ik_centr" 1}
			{movement_limit fast}
		}
	}
}

{"motocrew_6_shooter_rifle"
	{on spawn
		{tags add "r1 r2 r3 r4 r5 r6"}
	}
	{on fire "gun" overload
		{with_linked_entity "driver"	
			{if rand 0.13 
				{talk "in_action"}
			}
			{ani_play "moto_driver_aim"}
			{view show	"flashbarrel_moto"}
			{view start	"flashbarrel_moto"}
			{delay 0.2
				{view pause "flashbarrel_moto"}
			}

		}
		{delay 0.1
			{if tagged "r6"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r6"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r5"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r5"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r4"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r4"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r3"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r3"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r2"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r2"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r1"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_reload_6" 0.15}
				}
				{tags remove "r1"}
				{tags add "r1 r2 r3 r4 r5 r6"}
				{weapon_work "gun" 0}
				{delay 1 {movement_limit slow}}
				{delay 6 {weapon_work "gun" 1} {movement_limit fast}}
			}
		}
		{movement_limit slow}
		{ik_enable "ik_right" 0}
		{ik_enable "ik_left" 0}
		{ik_enable "ik_centr" 0}
		{delay 0.5
			{ik_enable "ik_right" 1}
			{ik_enable "ik_left" 1}
			{ik_enable "ik_centr" 1}
			{movement_limit fast}
		}
	}
}

{"motocrew_5_shooter_rifle"
	{on spawn
		{tags add "r1 r2 r3 r4 r5"}
	}
	{on fire "gun" overload
		{with_linked_entity "driver"	
			{if rand 0.13 
				{talk "in_action"}
			}
			{ani_play "moto_driver_aim"}
			{view show	"flashbarrel_moto"}
			{view start	"flashbarrel_moto"}
			{delay 0.2
				{view pause "flashbarrel_moto"}
			}

		}
		{delay 0.1
			{if tagged "r5"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r5"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r4"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r4"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r3"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r3"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r2"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r2"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r1"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_reload_6" 0.15}
				}
				{tags remove "r1"}
				{tags add "r1 r2 r3 r4 r5"}
				{weapon_work "gun" 0}
				{delay 1 {movement_limit slow}}
				{delay 6 {weapon_work "gun" 1} {movement_limit fast}}
			}
		}
		{movement_limit slow}
		{ik_enable "ik_right" 0}
		{ik_enable "ik_left" 0}
		{ik_enable "ik_centr" 0}
		{delay 0.5
			{ik_enable "ik_right" 1}
			{ik_enable "ik_left" 1}
			{ik_enable "ik_centr" 1}
			{movement_limit fast}
		}
	}
}

{"motocrew_7_shooter_rifle"
	{on spawn
		{tags add "r1 r2 r3 r4 r5 r6 r7"}
	}
	{on fire "gun" overload
		{with_linked_entity "driver"	
			{if rand 0.13 
				{talk "in_action"}
			}
			{ani_play "moto_driver_aim"}
			{spawn "flashbarrel_moto" "right_hand" x}

		}
		{delay 0.1
			{if tagged "r7"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r7"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r6"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r6"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r5"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r5"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r4"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r4"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r3"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r3"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r2"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r2"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r1"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_reload_6" 0.15}
				}
				{tags remove "r1"}
				{tags add "r1 r2 r3 r4 r5 r6 r7"}
				{delay 1 {movement_limit slow}}
				{delay 8 {weapon_work "gun" 1} {movement_limit fast}}
			}
		}
		{movement_limit slow}
		{ik_enable "ik_right" 0}
		{ik_enable "ik_left" 0}
		{ik_enable "ik_centr" 0}
		{delay 0.5
			{ik_enable "ik_right" 1}
			{ik_enable "ik_left" 1}
			{ik_enable "ik_centr" 1}
			{movement_limit fast}
		}
	}
}

{"motocrew_10_shooter_rifle"
	{on spawn
		{tags add "r1 r2 r3 r4 r5 r6 r7 r8 r9 r10"}
	}
	{on fire "gun" overload
		{with_linked_entity "driver"	
			{if rand 0.13 
				{talk "in_action"}
			}
			{ani_play "moto_driver_aim"}
			{spawn "flashbarrel_moto" "right_hand" x}

		}
		{delay 0.1
			{if tagged "r10"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r10"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r9"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r9"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r8"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r8"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r7"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r7"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r6"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r6"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r5"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r5"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r4"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r4"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r3"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r3"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r2"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_recoil" 0.5}
				}
				{tags remove "r2"}
				{weapon_work "gun" 0}
				{delay 0.4 {weapon_work "gun" 1}}
			else tagged "r1"
				{with_linked_entity "driver"	
					{ani_play "moto_driver_rifle_reload_10" 0.15}
				}
				{tags remove "r1"}
				{tags add "r1 r2 r3 r4 r5 r6 r7 r8 r9 r10"}
				{weapon_work "gun" 0}
				{delay 1 {movement_limit slow}}
				{delay 10 {weapon_work "gun" 1} {movement_limit fast}}
			}
		}
		{movement_limit slow}
		{ik_enable "ik_right" 0}
		{ik_enable "ik_left" 0}
		{ik_enable "ik_centr" 0}
		{delay 0.5
			{ik_enable "ik_right" 1}
			{ik_enable "ik_left" 1}
			{ik_enable "ik_centr" 1}
			{movement_limit fast}
		}
	}
}
;=======================================
