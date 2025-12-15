{"canist_drob_d"
	{on spawn
		{volumes "gas_smoke1" enable contact visible}
		{delay 2.5 {hide 2}}
		{tags add "canister_shell"}
	}
	{on ground_hit
		{if min_speed 1.5
			{call "explosion"}
		}
	}
	{on contact
		{if effector "human"
			{with_effector
				{health_damage_count 200 {effects "" "hit" "damage" "die" "die"}}
			}
		}
		{call "explosion"}
	}
	{on "explosion"
		{tags remove "canister_shell"}
		{blastwave c4 1 r0 1.8 r1 1.8}
		{if not air
			{if terrain_fx "ground"
				{spawn "ex_bul_sm"}
				else terrain_fx "snow"
					{spawn "ex_bul_sm_snow"}
				else terrain_fx "water"
					{spawn "ex_bul_sm_w"}
				else terrain_fx "shallow_water"
					{spawn "ex_bul_sm_w"}
				else terrain_fx "underwater"
					{spawn "ex_bul_sm_w"}
				else terrain_fx "puddle"
					{spawn "ex_bul_sm_w"}
				else terrain_fx "swamp"
					{spawn "ex_bul_sm_w"}
				else
				{spawn "ex_bul_sm"}
			}
		}
		{delete}
	}

}