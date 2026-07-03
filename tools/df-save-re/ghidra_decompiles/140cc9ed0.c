// FUN_140cc9ed0 @ 140cc9ed0
// callees:
//   -> 1402f5c50 FUN_1402f5c50
//   -> 140cbfd10 FUN_140cbfd10
//   -> 140cbfe30 FUN_140cbfe30


void FUN_140cc9ed0(undefined8 param_1,undefined2 param_2,undefined4 param_3)

{
  int local_res20 [2];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [4];
  
  FUN_1402f5c50(param_2,local_res20,&local_28,&local_24,&local_20,&local_1c,local_18);
  if (local_res20[0] != -1) {
    FUN_140cbfd10(param_1,local_res20[0],param_3);
  }
  if (local_28 != -1) {
    FUN_140cbfd10(param_1,local_28,param_3);
  }
  if (local_24 != -1) {
    FUN_140cbfd10(param_1,local_24,param_3);
  }
  if (local_20 != -1) {
    FUN_140cbfe30(param_1,local_20,param_3);
  }
  if (local_1c != -1) {
    FUN_140cbfe30(param_1,local_1c,param_3);
  }
  if (local_18[0] != -1) {
    FUN_140cbfe30(param_1,local_18[0],param_3);
  }
  return;
}

