// FUN_140c39a50 @ 140c39a50
// callees:
//   -> 140c13c60 FUN_140c13c60
//   -> 140c39c80 FUN_140c39c80
//   -> 1400512a0 FUN_1400512a0
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0


void FUN_140c39a50(longlong param_1,short param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if ((((*(longlong *)(param_1 + 0xa78) != 0) && (*(short *)(param_1 + 0x348) != 8)) &&
      (cVar2 = FUN_140c13c60(), cVar2 != '\0')) &&
     (FUN_140c39c80(param_1,1), (*(byte *)(param_1 + 0x114) & 4) == 0)) {
    lVar1 = *(longlong *)(param_1 + 0xa78);
    lVar3 = FUN_1400512a0(param_2,lVar1 + 0x218);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 4) == 0xf) {
        local_38 = 0xb;
      }
      else {
        if (*(int *)(lVar3 + 4) < 1) {
          return;
        }
        local_38 = 0xd7;
      }
      local_2c = 100;
      local_30 = 0;
      local_10 = 0;
      local_34 = (int)param_2;
      local_20 = 0;
      uStack_18 = 0;
      if (((lVar1 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
         ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
        cVar2 = FUN_140106f30(param_1);
        FUN_1409165e0(lVar1 + 0x248,&local_38,cVar2 != '\0');
      }
    }
  }
  return;
}

