
	header = player addaction [("<t color=""#FF3300"">" + ("### Barriers ###") +"</t>"),""]; 
	placeCone = player addaction ["Place Road Cone","scripts\barriers\deployCone.sqf"]; 
	placeBarrier = player addaction ["Place Barrier","scripts\barriers\deployBarrier.sqf"]; 
	removeCone = player addaction ["Remove Road Cone","scripts\barriers\removeCone.sqf"]; 
	removeBarrier = player addaction ["Remove Barrier","scripts\barriers\removeBarrier.sqf"]; 
	cancelBarrier = player addaction [("<t color=""#FF3300"">" + ("### Cancel ###") +"</t>"),"scripts\barriers\removeMenu.sqf"];
		
	player removeAction barrierMain;
