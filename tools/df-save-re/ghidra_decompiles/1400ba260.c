// FUN_1400ba260 @ 1400ba260
// callees:
//   -> 140050410 FUN_140050410


longlong FUN_1400ba260(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong local_res8;
  
  lVar3 = 0x3e;
  puVar1 = (undefined8 *)(param_1 + 8);
  do {
    puVar2 = puVar1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    lVar3 = lVar3 + -1;
    puVar1 = puVar2 + 8;
  } while (lVar3 != 0);
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  local_res8 = param_1;
  if ((&local_res8 < DAT_141c67080) && (DAT_141c67078 <= &local_res8)) {
    lVar3 = (longlong)&local_res8 - (longlong)DAT_141c67078;
    if (DAT_141c67080 == DAT_141c67088) {
      FUN_140050410(&DAT_141c67078);
    }
    if (DAT_141c67080 != (longlong *)0x0) {
      *DAT_141c67080 = DAT_141c67078[lVar3 >> 3];
    }
  }
  else {
    if (DAT_141c67080 == DAT_141c67088) {
      FUN_140050410(&DAT_141c67078);
    }
    if (DAT_141c67080 != (longlong *)0x0) {
      *DAT_141c67080 = param_1;
    }
  }
  DAT_141c67080 = DAT_141c67080 + 1;
  return param_1;
}

