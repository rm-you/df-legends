// FUN_14080a980 @ 14080a980
// callees:
//   -> 14000f360 FUN_14000f360
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0


void FUN_14080a980(longlong *param_1)

{
  char cVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  cVar1 = (**(code **)(*param_1 + 0x2a8))();
  if (cVar1 != '\0') {
    sVar2 = (**(code **)*param_1)(param_1);
    if ((sVar2 == 0x33) && ((int)param_1[0x27] != -1)) {
      lVar3 = FUN_14000f360(&DAT_141c66fd0);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 0xa78);
        local_34 = 0xffffffff;
        local_30 = 0;
        local_2c = 100;
        local_10 = 0;
        local_38 = 0x1f;
        local_20 = 0;
        uStack_18 = 0;
        if (((lVar4 != 0) && ((*(uint *)(lVar3 + 0x110) & 0x502) != 2)) &&
           ((*(uint *)(lVar3 + 0x118) & 0x1000) == 0)) {
          cVar1 = FUN_140106f30();
          FUN_1409165e0(lVar4 + 0x248,&local_38,cVar1 != '\0');
        }
      }
    }
  }
  return;
}

