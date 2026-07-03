// FUN_1403155e0 @ 1403155e0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1403155e0(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_res10 [2];
  uint local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined4 local_38 [4];
  
  local_res10[0] = (uint)(param_2[1] - *param_2 >> 3);
  FUN_1405bb7c0(param_1,local_res10,4);
  uVar3 = 0;
  uVar6 = uVar3;
  if (param_2[1] - *param_2 >> 3 != 0) {
    do {
      local_38[0] = **(undefined4 **)(uVar3 + *param_2);
      FUN_1405bb7c0(param_1,local_38,4);
      puVar1 = *(undefined4 **)(uVar3 + *param_2);
      switch(*puVar1) {
      case 1:
        uVar4 = 1;
        if (*(longlong *)(puVar1 + 2) == 0) {
          local_res10[0] = local_res10[0] & 0xffffff00;
          puVar2 = local_res10;
        }
        else {
          local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
          FUN_1405bb7c0(param_1,local_res18,1);
          local_res18[0] = *(uint *)(*(longlong *)(*(longlong *)(uVar3 + *param_2) + 8) + 0x130);
LAB_140315825:
          puVar2 = local_res18;
          uVar4 = 4;
        }
        break;
      case 2:
        uVar4 = 1;
        if (*(longlong *)(puVar1 + 2) != 0) {
LAB_1403156de:
          local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
          FUN_1405bb7c0(param_1,local_res18,1);
          local_res18[0] = **(uint **)(*(longlong *)(uVar3 + *param_2) + 8);
          goto LAB_140315825;
        }
        local_res20[0] = 0;
        puVar2 = (uint *)local_res20;
        break;
      case 3:
        uVar4 = 1;
        if (*(longlong *)(puVar1 + 2) != 0) {
          local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
          FUN_1405bb7c0(param_1,local_res18,1);
          local_res18[0] = *(uint *)(*(longlong *)(*(longlong *)(uVar3 + *param_2) + 8) + 0x24);
          goto LAB_140315825;
        }
        local_68[0] = 0;
        puVar2 = (uint *)local_68;
        break;
      case 4:
        uVar4 = 1;
        if (*(longlong *)(puVar1 + 2) != 0) goto LAB_1403156de;
        local_58[0] = 0;
        puVar2 = (uint *)local_58;
        break;
      case 5:
        uVar4 = 1;
        if (*(longlong *)(puVar1 + 2) != 0) {
          local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
          FUN_1405bb7c0(param_1,local_res18,1);
          local_res18[0] = *(uint *)(*(longlong *)(*(longlong *)(uVar3 + *param_2) + 8) + 0x1c);
          goto LAB_140315825;
        }
        local_50[0] = 0;
        puVar2 = (uint *)local_50;
        break;
      case 6:
        uVar4 = 1;
        if (*(longlong *)(puVar1 + 2) != 0) goto LAB_1403156de;
        local_48[0] = 0;
        puVar2 = (uint *)local_48;
        break;
      default:
        goto switchD_14031567f_caseD_7;
      case 9:
      case 10:
        uVar4 = 1;
        if (*(longlong *)(puVar1 + 2) != 0) {
          local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
          FUN_1405bb7c0(param_1,local_res18,1);
          local_res18[0] = *(uint *)(*(longlong *)(*(longlong *)(uVar3 + *param_2) + 8) + 0x3c);
          goto LAB_140315825;
        }
        local_40[0] = 0;
        puVar2 = (uint *)local_40;
        break;
      case 0xb:
        uVar4 = 1;
        if (*(longlong *)(puVar1 + 2) != 0) {
          local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
          FUN_1405bb7c0(param_1,local_res18,1);
          local_res18[0] = *(uint *)(*(longlong *)(*(longlong *)(uVar3 + *param_2) + 8) + 4);
          goto LAB_140315825;
        }
        local_60[0] = 0;
        puVar2 = (uint *)local_60;
      }
      FUN_1405bb7c0(param_1,puVar2,uVar4);
switchD_14031567f_caseD_7:
      uVar5 = (int)uVar6 + 1;
      uVar3 = uVar3 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)(param_2[1] - *param_2 >> 3));
  }
  return;
}

