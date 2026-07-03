// FUN_1405d2ce0 @ 1405d2ce0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1405d2ce0(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint local_res8 [2];
  undefined1 local_res18 [8];
  undefined2 local_res20 [4];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar6 = 0x18;
  puVar7 = param_1;
  do {
    puVar7 = puVar7 + 2;
    if (*(longlong *)puVar7 == 0) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      FUN_1405bb7c0(param_2,local_res8,1);
    }
    else {
      local_res18[0] = 1;
      FUN_1405bb7c0(param_2,local_res18,1);
      iVar3 = 0;
      if (0 < (int)*param_1) {
        uVar1 = param_1[1];
        lVar4 = 0;
        do {
          iVar5 = 0;
          if (0 < (int)uVar1) {
            lVar2 = 0;
            do {
              local_res20[0] = *(undefined2 *)(lVar2 + *(longlong *)(*(longlong *)puVar7 + lVar4));
              FUN_1405bb7c0(param_2,local_res20,2);
              uVar1 = param_1[1];
              lVar2 = lVar2 + 2;
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)uVar1);
          }
          iVar3 = iVar3 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar3 < (int)*param_1);
      }
    }
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

