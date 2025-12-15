{"muzzle_37mm_40mm_auto" ;// muzzle_37mm_40mm_auto
	{on fire "gun_sub_indirect"
		{view start "flashbarrelzenite"}
		{view start "zenite_smoke"}
		{play_sound "bkg_auto"}
		{delay 5
			{view pause "zenite_smoke"}
		}
		{call "zenite_terrain_fx"}
	}
}

{"muzzle_37mm_40mm_auto_sides" ;// muzzle_37mm_40mm_auto
	{on fire "gun_sub_indirect"
		{view start "flashbarrelzenite"}
		{view start "zenite_smoke"}
		{play_sound "bkg_auto"}
		{delay 5
			{view pause "zenite_smoke"}
		}
		{call "zenite_terrain_fx"}
	}
}

{"muzzle_75mm_76mm" ;// muzzle_75mm_76mm
	{on fire "gun_sub_indirect"
		{view start "flashbarrelmedium"}
		{play_sound "bkg_cannon_medium"}
		{start_sound "weapon/shot/tracer/"}
		{call "medium_terrain_fx"}
	}
}

{"muzzle_75mm_76mm_2" ;// muzzle_75mm_76mm as 2nd gun and no gun1_sub_indirect gun now
	{on fire "gun1_sub_indirect"
		{view start "flashbarrelmedium"}
		{play_sound "bkg_cannon_medium"}
		{start_sound "weapon/shot/tracer/"}
		{call "medium_terrain_fx"}
	}
}

{"muzzle_75mm_76mm_sides" ;// muzzle_75mm_76mm_sides
	{on fire "gun_sub_indirect"
		{view start "flashbarrelmedium"}
		{play_sound "bkg_cannon_medium"}
		{start_sound "weapon/shot/tracer/"}
		{call "medium_terrain_fx"}
	}
}

{"muzzle_75mm_76mm_round" ;// muzzle_75mm_76mm_round
	{on fire "gun_sub_indirect"
		{view start "flashbarrelmedium"}
		{play_sound "bkg_cannon_medium"}
		{start_sound "weapon/shot/tracer/"}
		{call "medium_terrain_fx"}
	}
}

{"muzzle_85mm_93mm" ;// muzzle_85mm_93mm
	{on fire "gun_sub_indirect"
		{view start "flashbarrellarge"}
		{play_sound "bkg_cannon_medium"}
		{start_sound "weapon/shot/tracer/"}
		{call "large_terrain_fx"}
	}
}

{"muzzle_85mm_93mm_sides" ;// muzzle_85mm_93mm_sides
	{on fire "gun_sub_indirect"
		{view start "flashbarrellarge"}
		{play_sound "bkg_cannon_medium"}
		{start_sound "weapon/shot/tracer/"}
		{call "large_terrain_fx"}
	}
}

{"muzzle_100mm_105mm" ;// muzzle_100mm_105mm
	{on fire "gun_sub_indirect"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_large"}
		{call "maximum_terrain_fx"}
	}
}

{"muzzle_100mm_105mm_sides" ;// muzzle_100mm_105mm_sides
	{on fire "gun_sub_indirect"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_large"}
		{call "maximum_terrain_fx"}
	}
}

{"muzzle_122mm_128mm"
	{on fire "gun_sub_indirect"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_large"}
		{call "maximum_terrain_fx"}
	}
}

{"muzzle_122mm_128mm_sides"
	{on fire "gun_sub_indirect"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_large"}
		{call "maximum_terrain_fx"}
	}
}

{"muzzle_150mm_155mm"
	{on fire "gun_sub_indirect"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_huge"}
		{call "maximum_terrain_fx"}
	}
}

{"muzzle_150mm_155mm_sides"
	{on fire "gun_sub_indirect"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_huge"}
		{call "maximum_terrain_fx"}
	}
}

{"artillery_minimap_heavy"
	{on fire "gun_sub_indirect"
		{if not tagged "fired"
			{tags add "fired"}
			{delay 0
				{spawn "artillery_warning_heavy" random_position 1100}
			}
			(mod "mp"
				{delay 2.5
					{tags remove "fired"}
				}
			)
			(mod not "mp"
				{delay 2.5
					{tags remove "fired"}
				}
			)
		}
	}
}

{"artillery_minimap_medium"
	{on fire "gun_sub_indirect"
		{if not tagged "fired"
			{tags add "fired"}
			{delay 0
				{spawn "artillery_warning_medium" random_position 900}
			}
			(mod "mp"
				{delay 1.50
					{tags remove "fired"}
				}
			)
			(mod not "mp"
				{delay 1.50
					{tags remove "fired"}
				}
			)
		}
	}
}

{"artillery_minimap_light"
	{on fire "gun_sub_indirect"
		{if not tagged "fired"
			{tags add "fired"}
			{delay 0
				{spawn "artillery_warning_light" random_position 700}
			}
			(mod "mp"
				{delay 1.50
					{tags remove "fired"}
				}
			)
			(mod not "mp"
				{delay 1.50
					{tags remove "fired"}
				}
			)
		}
	}
}