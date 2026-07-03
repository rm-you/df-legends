// FUN_140846140 @ 140846140
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140051cf0 FUN_140051cf0
//   -> 14000c780 FUN_14000c780
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 140051b70 FUN_140051b70
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140846140(longlong *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_98;
  uVar9 = 0;
  local_78 = 0;
  uVar11 = uVar9;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      iVar12 = 0;
      uVar7 = (uint)uVar9;
      puVar1 = *(undefined8 **)(*param_1 + uVar11);
      if ((*(int *)(puVar1 + 7) < 1) || ((*(byte *)puVar1[6] & 1) == 0)) goto LAB_14084643d;
      puVar5 = operator_new(0x18);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      local_70 = puVar5;
      FUN_140051cf0(puVar5,"item_layer");
      FUN_140051cf0(puVar5,"[OBJECT:ITEM]");
      local_48 = 0xf;
      local_50 = 0;
      local_60 = 0;
      FUN_14000c780(&local_60,"[ITEM_",6);
      uVar4 = (**(code **)*puVar1)(puVar1);
      switch(uVar4) {
      case 0:
        uVar10 = 6;
        pcVar6 = "WEAPON";
        break;
      case 1:
        uVar10 = 3;
        pcVar6 = "TOY";
        break;
      case 2:
        pcVar6 = "TOOL";
        goto LAB_14084630a;
      case 3:
        uVar10 = 10;
        pcVar6 = "INSTRUMENT";
        break;
      case 4:
        uVar10 = 8;
        pcVar6 = "TRAPCOMP";
        break;
      case 5:
        uVar10 = 5;
        pcVar6 = "ARMOR";
        break;
      case 6:
        pcVar6 = "AMMO";
        goto LAB_14084630a;
      case 7:
        uVar10 = 9;
        pcVar6 = "SIEGEAMMO";
        break;
      case 8:
        uVar10 = 6;
        pcVar6 = "GLOVES";
        break;
      case 9:
        uVar10 = 5;
        pcVar6 = "SHOES";
        break;
      case 10:
        uVar10 = 6;
        pcVar6 = "SHIELD";
        break;
      case 0xb:
        pcVar6 = "HELM";
        goto LAB_14084630a;
      case 0xc:
        uVar10 = 5;
        pcVar6 = "PANTS";
        break;
      case 0xd:
        pcVar6 = "FOOD";
LAB_14084630a:
        uVar10 = 4;
        break;
      default:
        goto switchD_140846244_default;
      }
      FUN_14000c9f0(&local_60,pcVar6,uVar10);
switchD_140846244_default:
      FUN_14000c9f0(&local_60,&DAT_140e7aaf8,1);
      FUN_14000cb40(&local_60,puVar1 + 1,0,0xffffffffffffffff);
      FUN_14000c9f0(&local_60,&DAT_140e7aafc,1);
      FUN_140051b70(puVar5,&local_60);
      if ((longlong)(puVar1[10] - puVar1[9]) >> 3 != 0) {
        lVar8 = 0;
        do {
          FUN_140051b70(puVar5,*(undefined8 *)(lVar8 + puVar1[9]));
          iVar12 = iVar12 + 1;
          lVar8 = lVar8 + 8;
          uVar7 = local_78;
        } while ((ulonglong)(longlong)iVar12 < (ulonglong)((longlong)(puVar1[10] - puVar1[9]) >> 3))
        ;
      }
      ppuVar2 = (undefined8 **)param_2[1];
      if ((&local_70 < ppuVar2) && (ppuVar3 = (undefined8 **)*param_2, ppuVar3 <= &local_70)) {
        if (ppuVar2 == (undefined8 **)param_2[2]) {
          FUN_14000c2d0(param_2,1);
        }
        if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
          *(undefined8 *)param_2[1] =
               *(undefined8 *)(*param_2 + ((longlong)&local_70 - (longlong)ppuVar3 >> 3) * 8);
        }
      }
      else {
        if (ppuVar2 == (undefined8 **)param_2[2]) {
          FUN_14000c2d0(param_2,1);
        }
        if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
          *(undefined8 *)param_2[1] = puVar5;
        }
      }
      param_2[1] = param_2[1] + 8;
      if (0xf < local_48) {
        FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
      }
LAB_14084643d:
      local_78 = uVar7 + 1;
      uVar9 = (ulonglong)local_78;
      uVar11 = uVar11 + 8;
    } while ((ulonglong)(longlong)(int)local_78 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  return;
}

