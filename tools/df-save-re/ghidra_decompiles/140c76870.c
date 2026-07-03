// FUN_140c76870 @ 140c76870
// callees:
//   -> 1408057f0 FUN_1408057f0
//   -> 140c76870 FUN_140c76870
//   -> 140c88550 FUN_140c88550
//   -> 1408054d0 FUN_1408054d0
//   -> 140019af0 FUN_140019af0


undefined8 FUN_140c76870(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  int local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (DAT_14167ec61 != '\0') {
    return 0;
  }
  if (DAT_1410b67dc == 1) {
    if (param_1 != *DAT_141c66fe8) {
      if ((*(uint *)(param_1 + 0x110) >> 0x12 & 1) != 0) {
        return 1;
      }
      if ((*(uint *)(param_1 + 0x110) >> 0x19 & 1) != 0) {
        puVar7 = *(undefined8 **)(param_1 + 0x1c0);
        puVar1 = *(undefined8 **)(param_1 + 0x1c8);
        local_38[0] = -1;
        local_30 = 0;
        uStack_28 = 0;
        if (puVar7 < puVar1) {
          do {
            iVar3 = (**(code **)(*(longlong *)*puVar7 + 0x10))();
            if ((iVar3 == 0xb) && (lVar5 = (**(code **)(*(longlong *)*puVar7 + 0x18))(), lVar5 != 0)
               ) {
              FUN_1408057f0(lVar5,local_38,1);
              break;
            }
            puVar7 = puVar7 + 1;
          } while (puVar7 < puVar1);
          if (local_38[0] == 1) {
LAB_140c76935:
            uVar6 = FUN_140c76870(local_30);
            return uVar6;
          }
        }
      }
    }
  }
  else if (DAT_1410b67d8 != 4) {
    uVar4 = *(uint *)(param_1 + 0x110);
    if (((uVar4 >> 0x12 & 1) != 0) && (cVar2 = FUN_140c88550(), cVar2 == '\0')) {
      return 1;
    }
    if ((uVar4 >> 0x19 & 1) != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x1c0);
      puVar1 = *(undefined8 **)(param_1 + 0x1c8);
      local_38[0] = -1;
      local_30 = 0;
      uStack_28 = 0;
      if (puVar7 < puVar1) {
        do {
          iVar3 = (**(code **)(*(longlong *)*puVar7 + 0x10))();
          if ((iVar3 == 0xb) && (lVar5 = (**(code **)(*(longlong *)*puVar7 + 0x18))(), lVar5 != 0))
          {
            FUN_1408057f0(lVar5,local_38,1);
            break;
          }
          puVar7 = puVar7 + 1;
        } while (puVar7 < puVar1);
        if (local_38[0] == 1) goto LAB_140c76935;
      }
    }
    cVar2 = FUN_140c88550(param_1);
    if (cVar2 == '\0') {
      local_res10[0] = 0x8ad0;
      if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
        local_res10[0] = *(undefined2 *)(param_1 + 0xa8);
        local_res20[0] = *(undefined2 *)(param_1 + 0xaa);
        local_res18[0] = *(undefined2 *)(param_1 + 0xac);
      }
      else {
        puVar1 = *(undefined8 **)(param_1 + 0x1c8);
        for (puVar7 = *(undefined8 **)(param_1 + 0x1c0); puVar7 < puVar1; puVar7 = puVar7 + 1) {
          iVar3 = (**(code **)(*(longlong *)*puVar7 + 0x10))();
          if ((iVar3 == 0xb) && (lVar5 = (**(code **)(*(longlong *)*puVar7 + 0x18))(), lVar5 != 0))
          {
            FUN_1408054d0(lVar5,local_res10,local_res20,local_res18);
            break;
          }
        }
      }
      uVar4 = FUN_140019af0(&DAT_141c53470,local_res10[0],local_res20[0],local_res18[0]);
      if ((uVar4 >> 9 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

