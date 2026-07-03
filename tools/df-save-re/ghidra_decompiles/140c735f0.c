// FUN_140c735f0 @ 140c735f0
// callees:
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0


void FUN_140c735f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  iVar1 = *(int *)(param_1 + 0x3a4);
  if (iVar1 != -1) {
    iVar5 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
    if (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      iVar7 = 0;
      if (-1 < iVar5) {
        while( true ) {
          iVar4 = iVar7 + iVar5 >> 1;
          lVar2 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar4 * 8);
          if (*(int *)(lVar2 + 0x130) == iVar1) break;
          if (iVar1 < *(int *)(lVar2 + 0x130)) {
            iVar5 = iVar4 + -1;
          }
          else {
            iVar7 = iVar4 + 1;
          }
          if (iVar5 < iVar7) {
            return;
          }
        }
        if (lVar2 != 0) {
          lVar6 = *(longlong *)(lVar2 + 0xa78);
          local_34 = 0xffffffff;
          local_30 = 0;
          local_2c = 100;
          local_10 = 0;
          local_38 = 0x1f;
          local_20 = 0;
          uStack_18 = 0;
          if (((lVar6 != 0) && ((*(uint *)(lVar2 + 0x110) & 0x502) != 2)) &&
             ((*(uint *)(lVar2 + 0x118) & 0x1000) == 0)) {
            cVar3 = FUN_140106f30(lVar2);
            FUN_1409165e0(lVar6 + 0x248,&local_38,cVar3 != '\0');
          }
        }
      }
    }
  }
  return;
}

