// FUN_140847830 @ 140847830
// callees:
//   -> 140847920 FUN_140847920
//   -> 14000c9f0 FUN_14000c9f0


void FUN_140847830(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(short *)(param_1 + 0x14) != 0xab) {
    FUN_140847920();
    return;
  }
  param_2[2] = 0;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 1) {
    FUN_14000c9f0(param_2,"Stop Bleeding",0xd);
    return;
  }
  if (iVar1 == 2) {
    FUN_14000c9f0(param_2,"Repair Compound Fracture",0x18);
    return;
  }
  if (iVar1 == 3) {
    FUN_14000c9f0(param_2,"Remove Rotten Tissue",0x14);
    return;
  }
  FUN_14000c9f0(param_2,"Surgery",7);
  return;
}

