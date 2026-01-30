{budgets
	{vehicle
		{mode "standard"}
		{resource
			{start		%s}
			{finish		%f}
			{growTime	3600}		; in seconds
			{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
			{payback
				{cp			"0		120		180		220		250		400	"} ; source code only supports 6 values
				{restore	"3.00	3.0		2.5		2		1.5		1"}
			}
		}
		{buttons "squad single supply support art lt mt ht td"}
	}
	{hero
		{resource
			{start 20}
		}
		{buttons "sp"}
		{tag "special"}
	}
}