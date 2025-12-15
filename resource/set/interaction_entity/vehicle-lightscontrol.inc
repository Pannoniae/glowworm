;//add repair control here

{"vehicle"
	{on "lights_switch"
		{if "engine_on"
		{if tagged "lightison"		
			{call "lights_off"}
			{tags remove "lightison"}
		else
			{call "lights_on"}
			{tags add "lightison"}
		}
		}
	}

	{on "wipers_switch"
		{if "engine_on"
		{if tagged "wiperison"
			{ani_stop "wipers"}
			{tags remove "wiperison"}
		else
			{ani_play "wipers" loop resume}
			{tags add "wiperison"}
		}
		}
	}

	(define "repairer_shot"				;//spawn repairerman
		{delay %4
			{spawn %0 "%1" x
				;{throw_off up 0.5 forward 0.5}
				{tags add "vehiclerepairerman"}
				;{volume "skin" disable all}
				;{volume "ram" disable all}
				;{volumes disable all}
				{able select 0}
				{delay 1
					{if not tagged "repairing"
						{delete}
					}
				}
				;due to script dose not work in deleting this guy so use inc to delete it
				{delay 50
					{if not tagged "repairing"
						{delete}
					}
				}
				{delay 100
					{if not tagged "repairing"
						{delete}
					}
				}
				{delay 150
					{if not tagged "repairing"
						{delete}
					}
				}
				{delay 200
					{delete};//General delete to prevant too many entities byRIPUSSR
				}
			}
		}
	)

	{on "vehicle_repairer_spawn"
		{if not tagged "vehiclerepairmodeon"
			{damage_report "vehicle_repairer" "maintenance start,disable chassis"}
			{tags remove "nixianbieji"}
			{tags add "vehiclerepairmodeon"};//in repairvehicle.inc define when move remove this tag,then脚本规定删除隐形人
			{chassis_work 0}
			;{weapon_work "mgun2" 0}need something else to operate turret
			{if not tagged "spawningrepairer"
				("repairer_shot" args "ger_repairer" gun 0.1 0.05 0)
				;{spawn "gun" "m72" x只有特殊的实体才能被召唤为可动的human!
				;	tags add "vehiclerepairerman"
				;}
				{tags add "spawningrepairer"}
				{delay 1
					{tags remove "spawningrepairer"}
				}
			}
		else
			{damage_report "vehicle_repairer" "maintenance stop,enable chassis"}
			{tags remove "vehiclerepairmodeon"}
			{chassis_work 1}
			;{weapon_work "mgun2" 1}
		}
	}
}

{"human"
	{on "manjumpup"
		;{impulse up 8 forward 15}
		;{throw_off up 8 forward 15}
		{health_damage_count -50 {effects ""}} ;add 1000 health
	}
}