{budgets
	{vehicle
		{mode "standard"}
		{resource
			{start		%s}
			{finish		%f}
			{growTime	2400}		; in seconds
			{growTable	"0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.82 0.84 0.86 0.88 0.9 0.9 0.9 0.9 1.0 1.0 1.0"}
			{payback
				{cp			"0		120		180		220		250		400	"} ; source code only supports 6 values
				{restore	"3.00	3.0		2.5		2		1.5		1.0"}
			}
		}
		{buttons "squad single supply support art lt mt ht td"}
	}
	{hero
		{resource
			{start %d}
		}
		{buttons "d"}
		{tag "special"}
	}
}