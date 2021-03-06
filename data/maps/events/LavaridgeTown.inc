LavaridgeTown_EventObjects:: @ 8380C78
	object_event 1, EVENT_OBJ_GFX_OLD_WOMAN_1, 0, 8, 0, 7, 0, 3, 8, 0, 0, 0, 0, 0, 0, LavaridgeTown_EventScript_14E751, 0, 0, 0
	object_event 2, EVENT_OBJ_GFX_OLD_MAN_1, 0, 5, 0, 1, 0, 3, 8, 0, 0, 0, 0, 0, 0, LavaridgeTown_EventScript_14E724, 0, 0, 0
	object_event 3, EVENT_OBJ_GFX_OLD_MAN_2, 0, 5, 0, 8, 0, 3, 8, 0, 0, 0, 0, 0, 0, LavaridgeTown_EventScript_14E72D, 0, 0, 0
	object_event 4, EVENT_OBJ_GFX_LITTLE_GIRL_1, 0, 10, 0, 13, 0, 3, 3, 32, 0, 0, 0, 0, 0, LavaridgeTown_EventScript_14E736, 0, 0, 0
	object_event 5, EVENT_OBJ_GFX_HOT_SPRINGS_OLD_WOMAN, 0, 4, 0, 4, 0, 3, 18, 0, 0, 0, 0, 0, 0, LavaridgeTown_EventScript_14E73F, 0, 0, 0
	object_event 6, EVENT_OBJ_GFX_HOT_SPRINGS_OLD_WOMAN, 0, 5, 0, 4, 0, 3, 17, 0, 0, 0, 0, 0, 0, LavaridgeTown_EventScript_14E748, 0, 0, 0
	object_event 7, EVENT_OBJ_GFX_VAR_3, 0, 6, 0, 16, 0, 3, 9, 0, 0, 0, 0, 0, 0, 0x0, FLAG_HIDE_RIVAL_LAVARIDGE_2, 0, 0
	object_event 8, EVENT_OBJ_GFX_VAR_0, 0, 12, 0, 15, 0, 0, 8, 0, 0, 0, 0, 0, 0, LavaridgeTown_EventScript_14E575, FLAG_HIDE_RIVAL_LAVARIDGE_1, 0, 0
	object_event 9, EVENT_OBJ_GFX_OLD_WOMAN_1, 0, 4, 0, 7, 0, 3, 8, 17, 0, 0, 0, 0, 0, LavaridgeTown_EventScript_14E75A, 0, 0, 0

LavaridgeTown_MapWarps:: @ 8380D50
	warp_def 12, 15, 0, 0, MAP_LAVARIDGE_TOWN_HERB_SHOP
	warp_def 5, 15, 0, 0, MAP_LAVARIDGE_TOWN_GYM_1F
	warp_def 15, 5, 0, 0, MAP_LAVARIDGE_TOWN_MART
	warp_def 9, 6, 0, 0, MAP_LAVARIDGE_TOWN_POKEMON_CENTER_1F
	warp_def 16, 15, 0, 0, MAP_LAVARIDGE_TOWN_HOUSE
	warp_def 9, 2, 3, 3, MAP_LAVARIDGE_TOWN_POKEMON_CENTER_1F

LavaridgeTown_MapCoordEvents:: @ 8380D80
	coord_event 6, 3, 3, 0, 0, 0, 0, LavaridgeTown_EventScript_14E710

LavaridgeTown_MapBGEvents:: @ 8380D90
	bg_event 14, 16, 0, 0, 0, LavaridgeTown_EventScript_14E7D7
	bg_event 7, 15, 0, 0, 0, LavaridgeTown_EventScript_14E7C5
	bg_event 17, 5, 0, 1, 0, LavaridgeTown_EventScript_1A00E1
	bg_event 13, 8, 0, 0, 0, LavaridgeTown_EventScript_14E7BC
	bg_event 10, 6, 0, 1, 0, LavaridgeTown_EventScript_1A00EA
	bg_event 16, 5, 0, 1, 0, LavaridgeTown_EventScript_1A00E1
	bg_event 11, 6, 0, 1, 0, LavaridgeTown_EventScript_1A00EA
	bg_hidden_item_event 4, 5, 3, ITEM_ICE_HEAL, FLAG_HIDDEN_ITEM_0

LavaridgeTown_MapEvents:: @ 8380DF0
	map_events LavaridgeTown_EventObjects, LavaridgeTown_MapWarps, LavaridgeTown_MapCoordEvents, LavaridgeTown_MapBGEvents
