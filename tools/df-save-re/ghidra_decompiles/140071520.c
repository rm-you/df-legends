// FUN_140071520 @ 140071520
// callees:
//   -> 1400504b0 FUN_1400504b0
//   -> 140051a50 FUN_140051a50


void FUN_140071520(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1400504b0();
  if (cVar1 != '\0') {
    lVar2 = *param_1;
    FUN_140051a50(lVar2,param_2,param_3);
    param_1[1] = lVar2 + param_2 * 4;
  }
  return;
}

