{Modifiers
	{modifier
		{name heroic_ai_range}
		{filter
			{include
				{tag
					{tag heroic_ai_range}
				}
			}
			{exclude
				{player
					{player "2"}
				}
				{player
					{player "0"}
				}
			}
		}
		{parameters
			{aim_range
				{place "*"}
				{scale 1.09}
			}
		}
	}
	{modifier
		{name hard_ai_range}
		{filter
			{include
				{tag
					{tag hard_ai_range}
				}
			}
			{exclude
				{player
					{player "2"}
				}
				{player
					{player "0"}
				}
			}
		}
		{parameters
			{aim_range
				{place "*"}
				{scale 1.03}
			}
		}
	}
	{modifier
		{name djhero}
		{filter
			{include
				{tag
					{tag djhero}
				}
			}
		}
		{parameters
			{armor
				{scale 1.20}
			}
		}
	}
	{modifier
		{name sharp_shot}
		{filter
			{include
				{tag
					{tag djhero}
				}
			}
		}
		{parameters
			{accuracy
				{place "*"}
				{scale 3}
			}
		}
	}
	{modifier
		{name avre_range}
		{filter
			{include
				{tag
					{tag avre_range}
				}
			}
		}
		{parameters
			{aim_range
				{place "*"}
				{scale 1.30}
			}
		}
	}	
	{modifier
		{name avre_armor}
		{filter
			{include
				{tag
					{tag avre_armor}
				}
			}
		}
		{parameters
			{armor
				{scale 1.10}
			}
		}
	}
}
