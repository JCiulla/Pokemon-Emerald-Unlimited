RustboroGardens_MapScripts::
	.byte 0


RustboroGardens_EventScript_Mudkip_Test::
# 4 "data/maps/RustboroGardens/scripts.pory"
	lock
# 5 "data/maps/RustboroGardens/scripts.pory"
	faceplayer
# 6 "data/maps/RustboroGardens/scripts.pory"
	createfieldmugshot MUGSHOT_MUDKIP, EMOTE_NORMAL
# 7 "data/maps/RustboroGardens/scripts.pory"
	msgbox RustboroGardens_EventScript_Mudkip_Test_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/RustboroGardens/scripts.pory"
	waitmessage
# 9 "data/maps/RustboroGardens/scripts.pory"
	removefieldmugshot
# 10 "data/maps/RustboroGardens/scripts.pory"
	release
	end


RustboroGardens_EventScript_Mudkip_Test_Text_0:
# 7 "data/maps/RustboroGardens/scripts.pory"
	.string "Kip! Mudkip!$"
