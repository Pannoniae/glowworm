{budgets
	{vehicle
		{mode "custom"}
		{resource
			{start		%s}
			{finish		%f}
			{growTime	2400}		; in seconds
			{growTable	"0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.82 0.84 0.86 0.88 0.9 0.9 0.9 0.9 1.0 1.0 1.0"}
			{payback
				{cp			"0		80		95		110		125		200	"} ; source code only supports 6 values
				{restore	"1.00	0.8		0.6		0.4		0.25	0.10"}
			}
			{limitmin	10}
			{limitmax	500000}
			{speedset	"3000 4000 6000 8000 10000 12000 16000 20000 24000"}
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