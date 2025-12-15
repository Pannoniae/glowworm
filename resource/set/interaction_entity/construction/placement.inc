{"placement_foxhole"
	{on spawn
		{delay 0.2
			{spawn "building_smoke" "basis"}
			{link_sound "foxhole_deploy" "vehicle/deploy/foxhole/"}
			{play_sound "foxhole_deploy"}
			{if terrain_fx "ice"
				{spawn "soldier_foxhole" "trench" x {tex_mod "win"}}  
			else terrain_fx "snow"
				{spawn "soldier_foxhole" "trench" x {tex_mod "win"}}
			else
				{spawn "soldier_foxhole" "trench" x}
			}
		}
	}
}

{"placement_nest"
	{on spawn
		{delay 0.2
			{spawn "building_smoke" "basis"}
			{link_sound "deploy" "vehicle/deploy"}
			{play_sound "deploy"}
			{if terrain_fx "country_road"
				{spawn "mg_foxhole_generate" "trench" x} 
			else terrain_fx "snow"
				{spawn "mg_foxhole_generate" "trench" x {tex_mod "win"}}
			else terrain_fx "ice"
				{spawn "mg_foxhole_generate" "trench" x {tex_mod "win"}}
			else terrain_fx "sand"
				{spawn "mg_foxhole_generate" "trench" x}
			else terrain_fx "grass"
				{spawn "mg_foxhole_generate" "trench" x}
			else terrain_fx "ground"
				{spawn "mg_foxhole_generate" "trench" x}
			else
				{spawn "mg_foxhole_generate" "trench" x}
			}
		}
	}
}

{"placement_trench"
	{on spawn
		{delay 0.2
			{spawn "building_smoke" "fx_dirt01"}
			{spawn "building_smoke" "fx_dirt02"}
			{spawn "building_smoke" "fx_dirt03"}
			{spawn "building_smoke" "fx_dirt04"}
			{spawn "building_smoke" "fx_dirt05"}
			{link_sound "trench_deploy" "vehicle/deploy/trench/"}
			{play_sound "trench_deploy"}
			{if terrain_fx "ice"
				{spawn "trench_engineer" "basis" x {tex_mod "win"}}  
			else terrain_fx "snow"
				{spawn "trench_engineer" "basis" x {tex_mod "win"}}
			else
				{spawn "trench_engineer" "basis" x}
			}
		}
	}
}

{"placement_sandbag_cannon_small"
	{on spawn
		{delay 0.2
			{link_sound "deploy" "vehicle/deploy"}
			{play_sound "deploy"}
			{spawn "building_smoke" "basis"}
			{spawn "sandbag2" "barricade1" x}
			{spawn "sack_1" "barricade2" x}
			{spawn "sack_1" "barricade3" x}
			{spawn "sack_3" "barricade4" x}
		}
	}
}

{"barricade" ;// entity name
	{on spawn
		{delay 0.1
			{spawn "building_smoke" "basis"}
			{link_sound "deploy" "vehicle/construction/entrench"}
			{play_sound "deploy"}
			{if terrain_fx "ice"
				{tex_mod "win"}
			else terrain_fx "snow"
				{tex_mod "win"}
			else
				; do nothing
			}
		}
	}
}

{"barricade_sq" ;// entity name
	{on spawn
		{delay 0.1
			{spawn "building_smoke" "basis"}
			{link_sound "deploy" "vehicle/construction/entrench"}
			{play_sound "deploy"}
			{if terrain_fx "ice"
				{tex_mod "win"}
			else terrain_fx "snow"
				{tex_mod "win"}
			else
				; do nothing
			}
		}
	}
}


{"hedgehog_service" ;// entity name
	{on spawn
		{delay 0.1
			{spawn "building_smoke" "basis"}
			{link_sound "deploy" "vehicle/deploy"}
			{play_sound "deploy"}
			{if terrain_fx "ice"
				{tex_mod "win"}
			else terrain_fx "snow"
				{tex_mod "win"}
			else
				; do nothing
			}
		}
	}
}

{"placement_sandbag_generic"
	{on spawn
		{delay 0.2
			{link_sound "deploy" "vehicle/deploy"}
			{play_sound "deploy"}
			{spawn "building_smoke" "basis"}
		}
	}
}

{"sandbag_cannon_shallow" ;// entity name
	{on spawn
		{delay 0.1
			{spawn "building_smoke" "service_bone"}
			{link_sound "deploy" "vehicle/deploy"}
			{play_sound "deploy"}
			{if terrain_fx "ice"
				{tex_mod "win"}
			else terrain_fx "snow"
				{tex_mod "win"}
			else
				; do nothing
			}
		}
	}
}

{"sandbag_cannon_standard" ;// entity name
	{on spawn
		{delay 0.1
			{spawn "building_smoke" "service_bone"}
			{link_sound "deploy" "vehicle/deploy"}
			{play_sound "deploy"}
			{if terrain_fx "ice"
				{tex_mod "win"}
			else terrain_fx "snow"
				{tex_mod "win"}
			else
				; do nothing
			}
		}
	}
}

{"medic_rally" ;// entity name
	{on spawn
		{delay 0.1
			{tags add "medic_rally"}
			{spawn "building_smoke" "service_bone"}
			{link_sound "tent_deploy" "vehicle/deploy/tent/"}
			{play_sound "tent_deploy"}
		}
	}
}

{"emplacement_shelter1" ;// entity name
	{on spawn
		{delay 0.1
			{link_sound "deploy"		"vehicle/construction/wood_deploy"}
			{play_sound "deploy"}
			{spawn "building_smoke" "basis"}
			{spawn "spheredust_norm" "placer_l"}
			{spawn "spheredust_norm" "placer_r"}
			{spawn "spheredust_norm" "placer_front"}
			{if terrain_fx "ice"
				{tex_mod "win"}
				{spawn "sandbag_structured_straight" "placer_l" x {tex_mod "win"}}
				{spawn "sandbag_structured_straight" "placer_r" x {tex_mod "win"}}
				{spawn "sandbag_structured_straight" "placer_f1" x {tex_mod "win"}}
				{spawn "sandbag_framed_straight" "placer_f1" x {tex_mod "win"}}
				{spawn "sandbag_framed_straight" "placer_f2" x {tex_mod "win"}}
			else terrain_fx "snow"
				{tex_mod "win"}
				{spawn "sandbag_structured_straight" "placer_l" x {tex_mod "win"}}
				{spawn "sandbag_structured_straight" "placer_r" x {tex_mod "win"}}
				{spawn "sandbag_framed_straight" "placer_f1" x {tex_mod "win"}}
				{spawn "sandbag_framed_straight" "placer_f2" x {tex_mod "win"}}
			else
				{spawn "sandbag_structured_straight" "placer_l" x }
				{spawn "sandbag_structured_straight" "placer_r" x }
				{spawn "sandbag_framed_straight" "placer_f1" x }
				{spawn "sandbag_framed_straight" "placer_f2" x }
			}
		}
	}
	{on "break"
	}
}

(define "on_spawn_generic"
		{delay 0.1
			{spawn "building_smoke" "service_bone"}
			{link_sound "deploy" "vehicle/deploy"}
			{play_sound "deploy"}
			{if terrain_fx "ice"
				{tex_mod "win"}
			else terrain_fx "snow"
				{tex_mod "win"}
			else
				; do nothing
			}
		}
)

{"ft_dot" 
	{on spawn
		("on_spawn_generic")
	}
}

{"ft_pillbox" 
	{on spawn
		("on_spawn_generic")
	}
}

{"ft_tower" 
	{on spawn
		("on_spawn_generic")
	}
}

{"ft_embankment" 
	{on spawn
		("on_spawn_generic")
	}
}