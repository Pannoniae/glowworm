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
				{scale 1.3}
			}
			{armor
				{scale 1.2}
			}
			{accuracy
				{place "*"}
				{scale 1.1}
			}
		}
	}
}
