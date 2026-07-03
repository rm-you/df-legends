// FUN_1401977e0 @ 1401977e0
// callees:
//   -> 140d3e310 FUN_140d3e310
//   -> 1400c5df0 FUN_1400c5df0
//   -> 1400049b0 FUN_1400049b0
//   -> 140d227c0 FUN_140d227c0
//   -> 1405bd000 FUN_1405bd000


void FUN_1401977e0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  uint uVar5;
  
  if (DAT_1410b67dc == 1) {
    DAT_1416992b0 = 1;
  }
  cVar2 = (**(code **)(*param_1 + 0x138))();
  if (cVar2 != '\0') {
    uVar6 = (uint)(short)param_1[1];
    lVar1 = param_1[4];
    uVar7 = uVar6;
    if ((int)uVar6 <= *(int *)((longlong)param_1 + 0x14)) {
      do {
        uVar4 = (uint)*(short *)((longlong)param_1 + 0xc);
        uVar5 = uVar4;
        if ((int)uVar4 <= (int)param_1[3]) {
          do {
            cVar2 = (**(code **)(*param_1 + 0x148))(param_1);
            if (((cVar2 == '\0') || (param_1[6] == 0)) ||
               (*(char *)((longlong)
                          (int)(uVar6 + (((*(int *)((longlong)param_1 + 0x14) - (int)param_1[1]) + 1
                                         ) * (uVar4 - *(int *)((longlong)param_1 + 0xc)) -
                                        (int)param_1[1])) + param_1[6]) != '\0')) {
              FUN_140d3e310(&DAT_141c53470,uVar7 & 0xffff,uVar5 & 0xffff,(short)lVar1);
              FUN_1400c5df0(&DAT_141c53470,uVar7 & 0xffff,uVar5 & 0xffff,(short)lVar1,8);
              FUN_1400049b0(&DAT_141c53470,uVar7 & 0xffff);
              FUN_140d227c0(&DAT_141c53470,uVar7 & 0xffff);
              FUN_1405bd000(&DAT_141c53470,uVar7 & 0xffff);
            }
            uVar3 = (short)uVar5 + 1;
            uVar5 = (uint)uVar3;
            uVar4 = (uint)(short)uVar3;
          } while ((int)uVar4 <= (int)param_1[3]);
        }
        uVar3 = (short)uVar7 + 1;
        uVar6 = (uint)(short)uVar3;
        uVar7 = (uint)uVar3;
      } while ((int)uVar6 <= *(int *)((longlong)param_1 + 0x14));
    }
    (**(code **)(*param_1 + 0x278))(param_1);
  }
  return;
}

