
{"bergetiger tank"
	;{on spawn
	;	{tex_mod "grey"}
	;}R.I.P grey Tiger1H bergetiger
	("pz6_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}
{"tank"
	{on break			;// {on break} is for when components break
		{if not tagged "exploded"
			{if component "trackleft"
				{talk "broken_track"}
				{tags add "trackleft_brake"};//就改了这,但是没用上
			else component "trackright"
				{talk "broken_track"}
				{tags add "trackright_brake"}
			}
		}
	}
	{on repair
		{if component "trackleft"
			{tags remove "trackleft_brake"};/就改了这
		else component "trackright"
			{tags remove "trackright_brake"}
		}
	}
}
{"car"
	{on break
		{if not tagged "exploded"
			{if component "wheel"
				{tags add "wheel_damaged"}
			}
		}
	}
	{on repair
			{if component "wheel"
				{tags remove "wheel_damaged"}
			}
	}
}

{"vehicle vehiclerepairerprop";//to use prop to do something
	{on turn on
		{if tagged "vehiclerepairmodeon";//与脚本相关
			{tags remove "vehiclerepairmodeon"}
		}
	}
	{on move on
		{if tagged "vehiclerepairmodeon"
			{tags remove "vehiclerepairmodeon"}
		}	
	}
	{on break
		{if tagged "vehiclerepairmodeon"
			{if component "body"
				{damage_report "vehicle_repairer" "Hull break.Maintenance is interrupted"}
				{tags remove "vehiclerepairmodeon"}
			else component "engine"
				{damage_report "vehicle_repairer" "Engine break.Maintenance is interrupted"}
				{tags remove "vehiclerepairmodeon"}
			else component "turret"
				{damage_report "vehicle_repairer" "Turret break.Maintenance is interrupted"}
				{tags remove "vehiclerepairmodeon"}
			}
		}
	}
}

{"human humaninvincible"	;//cause bullet disapear,maybe there is better way but im tired now
	{on contact overload sync
	}
	{on bullet_hit overload
	}
	{on "process_bullet_hit" overload sync
	}
	{on blast_hit overload sync
	}
}
