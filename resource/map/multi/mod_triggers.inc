			(include "/map/ripair.mi")
			{"service/link/1_link"
				{condition
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag link_place1}
							}
							{count
								{op "=="}
								{value 1}
							}
						}
					}
				}
				{actions
					{"linker"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag link_place1}
									}
								}
								{exclude
									{state
										{state linked}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag link_place1}
											}
										}
									}
								}
							}
							{amount 1
							}
						}
						{entities
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag link_to_place1}
									}
								}
								{exclude
									{state
										{state linked}
									}
								}
							}
							{amount 1
							}
							{sort
								{type entity}
								{entity
									{ignore_captured_by_user 0}
									{tag link_place1}
								}
							}
						}
						{place
							{type specific}
							{name vehicle1}
						}
					}
					{"linker"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag link_place1}
									}
								}
								{exclude
									{state
										{state linked}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag link_place1}
											}
										}
									}
								}
							}
							{amount 1
							}
						}
						{entities
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag link_to_place1}
									}
								}
								{exclude
									{state
										{state linked}
									}
								}
							}
							{amount 1
							}
							{sort
								{type entity}
								{entity
									{ignore_captured_by_user 0}
									{tag link_place1}
								}
							}
						}
						{place
							{type specific}
							{name vehicle1}
						}
					}
				}
			}
			
(define "auto medic common script"  
	{"auto medic/common script/add tags for medics"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "fin_stalhelm_medic"}
										}
									}
									{exclude
										{tag
											{tag medic}
										}
										{tag
											{tag medic_ignored}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{include
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "ger_m40_helmet_medic"}
										}
									}
									{exclude
										{tag
											{tag medic}
										}
										{tag
											{tag medic_ignored}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{include
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_ssh39_medic"}
										}
									}
									{exclude
										{tag
											{tag medic}
										}
										{tag
											{tag medic_ignored}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{include
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_ssh40_medic"}
										}
									}
									{exclude
										{tag
											{tag medic}
										}
										{tag
											{tag medic_ignored}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{include
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "medkit_fra"}
										}
									}
									{exclude
										{tag
											{tag medic}
										}
										{tag
											{tag medic_ignored}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{include
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "medkit_hun"}
										}
									}
									{exclude
										{tag
											{tag medic}
										}
										{tag
											{tag medic_ignored}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{include
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "medkit_ita"}
										}
									}
									{exclude
										{tag
											{tag medic}
										}
										{tag
											{tag medic_ignored}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{include
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "medkit_jap"}
										}
									}
									{exclude
										{tag
											{tag medic}
										}
										{tag
											{tag medic_ignored}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{include
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "medkit_pol"}
										}
									}
									{exclude
										{tag
											{tag medic}
										}
										{tag
											{tag medic_ignored}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{include
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "medkit_uk"}
										}
									}
									{exclude
										{tag
											{tag medic}
										}
										{tag
											{tag medic_ignored}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{include
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "us-medkit"}
										}
									}
									{exclude
										{tag
											{tag medic}
										}
										{tag
											{tag medic_ignored}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{include
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "tent_kit"}
										}
									}
									{exclude
										{tag
											{tag medic}
										}
										{tag
											{tag medic_ignored}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{include
									{prop
										{prop human}
									}
									{with_item
										{type existance}
										{item "fin_stalhelm_medic"}
									}
								}
								{exclude
									{tag
										{tag medic}
									}
									{tag
										{tag medic_ignored}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
							{group
								{include
									{prop
										{prop human}
									}
									{with_item
										{type existance}
										{item "ger_m40_helmet_medic"}
									}
								}
								{exclude
									{tag
										{tag medic}
									}
									{tag
										{tag medic_ignored}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
							{group
								{include
									{prop
										{prop human}
									}
									{with_item
										{type existance}
										{item "soviet_ssh39_medic"}
									}
								}
								{exclude
									{tag
										{tag medic}
									}
									{tag
										{tag medic_ignored}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
							{group
								{include
									{prop
										{prop human}
									}
									{with_item
										{type existance}
										{item "soviet_ssh40_medic"}
									}
								}
								{exclude
									{tag
										{tag medic}
									}
									{tag
										{tag medic_ignored}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
							{group
								{include
									{prop
										{prop human}
									}
									{with_item
										{type existance}
										{item "medkit_fra"}
									}
								}
								{exclude
									{tag
										{tag medic}
									}
									{tag
										{tag medic_ignored}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
							{group
								{include
									{prop
										{prop human}
									}
									{with_item
										{type existance}
										{item "medkit_hun"}
									}
								}
								{exclude
									{tag
										{tag medic}
									}
									{tag
										{tag medic_ignored}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
							{group
								{include
									{prop
										{prop human}
									}
									{with_item
										{type existance}
										{item "medkit_ita"}
									}
								}
								{exclude
									{tag
										{tag medic}
									}
									{tag
										{tag medic_ignored}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
							{group
								{include
									{prop
										{prop human}
									}
									{with_item
										{type existance}
										{item "medkit_jap"}
									}
								}
								{exclude
									{tag
										{tag medic}
									}
									{tag
										{tag medic_ignored}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
							{group
								{include
									{prop
										{prop human}
									}
									{with_item
										{type existance}
										{item "medkit_pol"}
									}
								}
								{exclude
									{tag
										{tag medic}
									}
									{tag
										{tag medic_ignored}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
							{group
								{include
									{prop
										{prop human}
									}
									{with_item
										{type existance}
										{item "medkit_uk"}
									}
								}
								{exclude
									{tag
										{tag medic}
									}
									{tag
										{tag medic_ignored}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
							{group
								{include
									{prop
										{prop human}
									}
									{with_item
										{type existance}
										{item "us-medkit"}
									}
								}
								{exclude
									{tag
										{tag medic}
									}
									{tag
										{tag medic_ignored}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
							{group
								{include
									{prop
										{prop human}
									}
									{with_item
										{type existance}
										{item "tent_kit"}
									}
								}
								{exclude
									{tag
										{tag medic}
									}
									{tag
										{tag medic_ignored}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
						}
						{tag_add medic}
					}
					{"delay"
						{time 0.1}
					}
					{"trigger"
						{name "auto medic/common script/add tags for medics"}
					}
				}
	}

	{"auto medic/common script/remove linked medic tag"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{tag
											{tag medic}
										}
										{state
											{state linked}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{include
									{tag
										{tag medic}
									}
									{state
										{state linked}
									}
								}
							}
						}
						{tag_remove medic_working}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{include
									{tag
										{tag medic}
									}
									{state
										{state linked}
									}
								}
							}
						}
						{tag_remove medic}
					}
					{"trigger"
						{name "auto medic/common script/remove linked medic tag"}
					}
				}
	}

	{"auto medic/common script/add medic_working"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{tag
											{tag medic}
										}
										{order eMedic
										}
									}
									{exclude
										{tag
											{tag medic_working}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{include
									{tag
										{tag medic}
									}
									{order eMedic
									}
								}
								{exclude
									{tag
										{tag medic_working}
									}
								}
							}
						}
						{tag_add medic_working}
					}
					{"trigger"
						{name "auto medic/common script/add medic_working"}
					}
				}
	}

	{"auto medic/common script/remove medic_working"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{tag
											{tag medic_working}
										}
									}
									{exclude
										{order eMedic
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{include
									{tag
										{tag medic_working}
									}
								}
								{exclude
									{order eMedic
									}
								}
							}
						}
						{tag_remove medic_working}
					}
					{"trigger"
						{name "auto medic/common script/remove medic_working"}
					}
				}
	}

	{"auto medic/common script/if the wounded is revived"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{tag
											{tag ignored}
										}
									}
									{exclude
										{state
											{state dead}
										}
									}
								}
								{group
									{include
										{tag
											{tag can_medic}
										}
									}
									{exclude
										{state
											{state dead}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{include
									{tag
										{tag ignored}
									}
								}
								{exclude
									{state
										{state dead}
									}
								}
							}
							{group
								{include
									{tag
										{tag can_medic}
									}
								}
								{exclude
									{state
										{state dead}
									}
								}
							}
						}
						{tag_remove ignored}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{include
									{tag
										{tag ignored}
									}
								}
								{exclude
									{state
										{state dead}
									}
								}
							}
							{group
								{include
									{tag
										{tag can_medic}
									}
								}
								{exclude
									{state
										{state dead}
									}
								}
							}
						}
						{tag_remove can_medic}
					}
					{"trigger"
						{name "auto medic/common script/if the wounded is revived"}
					}
				}
	}

	{"auto medic/common script/if the wounded is bleed out"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{tag
											{tag can_medic}
										}
										{tag
											{tag _bleedout_}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{include
									{tag
										{tag can_medic}
									}
									{tag
										{tag _bleedout_}
									}
								}
							}
						}
						{tag_remove can_medic}
					}
					{"trigger"
						{name "auto medic/common script/if the wounded is bleed out"}
					}
				}
	}

)

(define "auto medic"  
	{"auto medic/p%player/1.safety check"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{tag
											{tag bleeding}
										}
										{player
											{player "%player"}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{tag
											{tag bleeding_check}
										}
										{tag
											{tag ignored}
										}
										{tag
											{tag can_medic}
										}
									}
								}
							}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{tag
											{tag medic}
										}
										{player
											{player "%player"}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{tag
											{tag medic_working}
										}
										{state
											{state linked}
										}
									}
								}
							}
						}
						{"3.near"
							{units
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{tag
											{tag bleeding}
										}
										{player
											{player "%player"}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{tag
											{tag bleeding_check}
										}
										{tag
											{tag ignored}
										}
										{tag
											{tag can_medic}
										}
									}
								}
							}
							{near_to
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{tag
											{tag medic}
										}
										{player
											{player "%player"}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{tag
											{tag medic_working}
										}
										{state
											{state linked}
										}
									}
								}
							}
							{distance 100}
						}
					}
				}
				{actions
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{include
									{tag
										{tag bleeding}
									}
									{player
										{player "%player"}
									}
								}
								{exclude
									{state
										{state inactive}
									}
									{tag
										{tag bleeding_check}
									}
									{tag
										{tag ignored}
									}
									{tag
										{tag can_medic}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{include
											{tag
												{tag medic}
											}
											{player
												{player "%player"}
											}
										}
										{exclude
											{state
												{state dead}
											}
											{tag
												{tag medic_working}
											}
											{state
												{state linked}
											}
										}
									}
								}
							}
							{amount 1
							}
						}
						{tag_add bleeding_check}
					}
					{"switch"
						{"case"
							{condition
								{type near}
								{units
									{ignore_captured_by_user 0}
									{tag bleeding_check}
									{player "%player"}
								}
								{near_to
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{include
											{relation
												{relation enemy}
												{player "%player"}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{state
												{state dead}
											}
											{state
												{state inactive}
											}
										}
									}
									{group
										{include
											{relation
												{relation enemy}
												{player "%player"}
											}
											{prop
												{prop vehicle}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{state
												{state inactive}
											}
										}
									}
								}
								{distance 50}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag bleeding_check}
									{player "%player"}
								}
								{tag_add ignored}
								{tag_remove bleeding_check}
							}
						}
						{"default"
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag bleeding_check}
									{player "%player"}
								}
								{tag_add can_medic}
								{tag_remove bleeding_check}
							}
						}
					}
					{"trigger"
						{name "auto medic/p%player/1.safety check"}
					}
				}
	}

	{"auto medic/p%player/1-2.revive can_medic"
				{condition
					;{expression "1 & 2 & !3"}
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{player
											{player "%player"}
										}
										{tag
											{tag can_medic}
										}
									}
								}
							}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{player
											{player "%player"}
										}
										{tag
											{tag medic}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{tag
											{tag medic_working}
										}
										{state
											{state linked}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"actor_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{include
									{player
										{player "%player"}
									}
									{tag
										{tag medic}
									}
								}
								{exclude
									{state
										{state dead}
									}
									{tag
										{tag medic_working}
									}
									{state
										{state linked}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{include
											{player
												{player "%player"}
											}
											{tag
												{tag can_medic}
											}
										}
									}
								}
							}
							{amount 1
							}
						}
						{movement
							{speed fast}
							{kind fast}
							{type normal}
						}
					}
					{"action"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{include
									{player
										{player "%player"}
									}
									{tag
										{tag medic}
									}
								}
								{exclude
									{state
										{state dead}
									}
									{tag
										{tag medic_working}
									}
									{state
										{state linked}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{include
											{player
												{player "%player"}
											}
											{tag
												{tag can_medic}
											}
										}
									}
								}
							}
							{amount 1
							}
						}
						{drop orders}
						{action medic}
						{target
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{include
									{player
										{player "%player"}
									}
									{tag
										{tag can_medic}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{include
											{player
												{player "%player"}
											}
											{tag
												{tag medic}
											}
										}
										{exclude
											{state
												{state dead}
											}
											{tag
												{tag medic_working}
											}
											{state
												{state linked}
											}
										}
									}
								}
							}
							{amount 1
							}
						}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{include
									{player
										{player "%player"}
									}
									{tag
										{tag can_medic}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{include
											{player
												{player "%player"}
											}
											{tag
												{tag medic_working}
											}
										}
									}
								}
							}
							{amount 1
							}
						}
						{tag_add ignored}
						{tag_remove can_medic}
					}
					{"delay"
						{time 2}
					}
					{"trigger"
						{name "auto medic/p%player/1-2.revive can_medic"}
					}
				}
	}

	{"auto medic/p%player/2.if all wounded are ignored"
				{condition
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag ignored}
								{player "%player"}
							}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{tag
											{tag bleeding}
										}
										{player
											{player "%player"}
										}
									}
									{exclude
										{tag
											{tag ignored}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{count
								{op "=="}
								{value 0}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 15}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag ignored}
							{player "%player"}
						}
						{tag_remove ignored}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "auto medic/p%player/2.if all wounded are ignored"}
					}
				}
	}
)


("auto medic common script")
("auto medic" player(0))
("auto medic" player(1))
("auto medic" player(2))
("auto medic" player(3))
("auto medic" player(4))
("auto medic" player(5))
("auto medic" player(6))
("auto medic" player(7))
("auto medic" player(8))

(define "group_anti_aircraft" 
							{source advanced}
							{ignore_captured_by_user 0}
								{group
									{include
										{player
											{player "%player"}
										}
										{tag
											{tag anti_aircraft} 
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{tag
											{tag anti_aircraft_working}
										}
									}
								}
)

(define "group_airborne"  
							{source advanced}
							{ignore_captured_by_user 0}
								{group
									{include
										{prop
											{prop airborne}
										}
										{relation
											{relation enemy}
											{player "%player"}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{relation
											{relation ally}
											{player "%player"}
										}
										{state
											{state inactive}
										}
										{tag
											{tag shotdown}
										}
										{tag
											{tag _abandoned}
										}
										{tag
											{tag destroyed}
										}
									}
								}
								{group
									{include
										{prop
											{prop airborne}
										}
										{relation
											{relation neutral}
											{player "%player"}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{relation
											{relation ally}
											{player "%player"}
										}
										{state
											{state inactive}
										}
										{tag
											{tag shotdown}
										}
										{tag
											{tag _abandoned}
										}
										{tag
											{tag destroyed}
										}
									}
								}
)

(define "anti_aircraft_attack" 
	{"anti_aircraft_attack/p%player/detect and fire"
				{condition 
					{terms
						{"1.near"
							{units
								("group_anti_aircraft" player(%player))
							}
							{near_to
								("group_airborne" player(%player))
							}
							{distance 250}
						}
					}
				}
				{actions  
					{"actor_fire"  
						{selector
							("group_anti_aircraft" player(%player))
							{sort
								{type entity}
								{entity
									("group_airborne" player(%player))
								}
							}
							{amount 1
							}
						}
						{drop orders}
						{attack enemies}
						{enemies
							("group_airborne" player(%player))
							{sort
								{type entity}
								{entity
									("group_anti_aircraft" player(%player))
								}
							}
							{amount 1
							}
						}
						{interval 0}
						{time 0}
						{burst_mode long}
					}
					{"entity_state"
						{selector
							("group_anti_aircraft" player(%player))
							{sort
								{type entity}
								{entity
									("group_airborne" player(%player))
								}
							}
							{amount 1
							}
						}
						{tag_add anti_aircraft_working}
					}
					{"trigger"
						{name "anti_aircraft_attack/p%player/detect and fire"}
					}
				}
			}
			{"anti_aircraft_attack/p%player/remove anti_aircraft_working tag" 
				{condition
					{expression "!1 & 2"}
					{terms
						{"1.near"
							{units
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{include
										{tag
											{tag anti_aircraft_working}
										}
										{player
											{player "%player"}
										}
									}
								}
							}
							{near_to
								("group_airborne" player(%player))
							}
							{distance 250}
						}
						{"2.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag anti_aircraft_working}
								{player "%player"}
							}
						}
					}
				}
				{actions
					{"action"
						{selector
							{ignore_captured_by_user 0}
							{tag anti_aircraft_working}
							{player "%player"}
						}
						{drop orders}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag anti_aircraft_working}
							{player "%player"}
						}
						{tag_remove anti_aircraft_working}
					}
					{"trigger"
						{name "anti_aircraft_attack/p%player/remove anti_aircraft_working tag"}
					}
				}
			}
)


("anti_aircraft_attack" player(0))
("anti_aircraft_attack" player(1))
("anti_aircraft_attack" player(2))
("anti_aircraft_attack" player(3))
("anti_aircraft_attack" player(4))
("anti_aircraft_attack" player(5))
("anti_aircraft_attack" player(6))
("anti_aircraft_attack" player(7))
("anti_aircraft_attack" player(8))