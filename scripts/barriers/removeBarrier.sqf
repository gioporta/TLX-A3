
_list = position player nearObjects ["RoadBarrier_F",1.5];
_barrier = (_list select 0);
deleteVehicle _barrier;
