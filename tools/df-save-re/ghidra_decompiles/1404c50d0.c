// FUN_1404c50d0 @ 1404c50d0
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 14000c780 FUN_14000c780
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c110 FUN_14000c110
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1404c50d0(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_48 = 0xfffffffffffffffe;
  local_20 = DAT_1410b5008 ^ (ulonglong)auStack_68;
  uVar2 = FUN_1409fc0c0();
  iVar6 = ((int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff + uVar2 >> 0x1d) +
          1;
  local_28 = 0xf;
  local_30 = 0;
  local_40 = 0;
  uVar2 = FUN_1409fc0c0();
  uVar2 = uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff;
  uVar7 = uVar2 >> 0x1d;
  if (uVar2 >> 0x1d == 0) {
    puVar4 = &DAT_140e97f7c;
LAB_1404c51a2:
    FUN_14000c780(&local_40,puVar4,1);
  }
  else {
    if (uVar7 == 1) {
      puVar4 = &DAT_140ed3b38;
      goto LAB_1404c51a2;
    }
    if (uVar7 == 2) {
      puVar4 = &DAT_140ed3b34;
      goto LAB_1404c51a2;
    }
    if (uVar7 == 3) {
      puVar4 = &DAT_140ed3b30;
      goto LAB_1404c51a2;
    }
  }
  bVar1 = true;
  if (iVar6 != 0) {
    do {
      if (iVar6 != 1) goto switchD_1404c5217_default;
      uVar2 = FUN_1409fc0c0();
      switch((uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
             0x15555556) {
      case 0:
        puVar4 = &DAT_140e97f7c;
        break;
      case 1:
        puVar4 = &DAT_140ed3b34;
        break;
      case 2:
        puVar4 = &DAT_140ed3b30;
        break;
      case 3:
        uVar8 = 2;
        puVar4 = &DAT_140ed3b68;
        goto LAB_1404c525f;
      case 4:
        uVar8 = 2;
        puVar4 = &DAT_140ed3b64;
        goto LAB_1404c525f;
      case 5:
        puVar4 = &DAT_140ed3b38;
        break;
      default:
        goto switchD_1404c5217_default;
      }
      uVar8 = 1;
LAB_1404c525f:
      FUN_14000c780(&local_40,puVar4,uVar8);
switchD_1404c5217_default:
      if ((!bVar1) && (iVar6 != 1)) {
        uVar2 = FUN_1409fc0c0();
        switch((uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
               0x15555556) {
        case 0:
          FUN_14000c9f0(param_1,&DAT_140ed3b60,1);
          break;
        case 1:
          FUN_14000c9f0(param_1,&DAT_140ed3b74,1);
          break;
        case 2:
          FUN_14000c9f0(param_1,&DAT_140ed422c,1);
          break;
        case 3:
          FUN_14000c9f0(param_1,&DAT_140ed4244,1);
          break;
        case 4:
          FUN_14000c9f0(param_1,&DAT_140ed4258,1);
          break;
        case 5:
          FUN_14000c9f0(param_1,&DAT_140ed424c,1);
        }
        goto switchD_1404c52c9_default;
      }
      uVar2 = FUN_1409fc0c0();
      switch((ulonglong)
             (uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
             0x31f3832) {
      case 0:
        uVar8 = 1;
        puVar5 = (undefined2 *)&DAT_140ed3b60;
        goto LAB_1404c55e5;
      case 1:
        puVar5 = (undefined2 *)&DAT_140ed3b5c;
        break;
      case 2:
        puVar5 = (undefined2 *)&DAT_140ed3b78;
        break;
      case 3:
        uVar8 = 1;
        puVar5 = (undefined2 *)&DAT_140ed3b74;
        goto LAB_1404c55e5;
      case 4:
        puVar5 = (undefined2 *)&DAT_140ed3b70;
        break;
      case 5:
        puVar5 = (undefined2 *)&DAT_140ed3b6c;
        break;
      case 6:
        puVar5 = &DAT_140e5cb14;
        break;
      case 7:
        uVar8 = 3;
        puVar5 = (undefined2 *)&DAT_140ed4208;
        goto LAB_1404c55e5;
      case 8:
        uVar8 = 3;
        puVar5 = (undefined2 *)&DAT_140ed4204;
        goto LAB_1404c55e5;
      case 9:
        puVar5 = (undefined2 *)&DAT_140ed4200;
        break;
      case 10:
        uVar8 = 3;
        puVar5 = (undefined2 *)&DAT_140ed41fc;
        goto LAB_1404c55e5;
      case 0xb:
        uVar8 = 3;
        puVar5 = (undefined2 *)&DAT_140ed4218;
        goto LAB_1404c55e5;
      case 0xc:
        uVar8 = 1;
        puVar5 = (undefined2 *)&DAT_140e5a3c0;
        goto LAB_1404c55e5;
      case 0xd:
        puVar5 = (undefined2 *)&DAT_140ed4214;
        break;
      case 0xe:
        puVar5 = (undefined2 *)&DAT_140ed4210;
        break;
      case 0xf:
        uVar8 = 1;
        puVar5 = (undefined2 *)&DAT_140ed420c;
        goto LAB_1404c55e5;
      case 0x10:
        puVar5 = (undefined2 *)&DAT_140ed4228;
        break;
      case 0x11:
        puVar5 = (undefined2 *)&DAT_140ed4224;
        break;
      case 0x12:
        puVar5 = &DAT_140e5cb50;
        break;
      case 0x13:
        uVar8 = 3;
        puVar5 = (undefined2 *)&DAT_140ed4220;
        goto LAB_1404c55e5;
      case 0x14:
        uVar8 = 3;
        puVar5 = (undefined2 *)&DAT_140ed421c;
        goto LAB_1404c55e5;
      case 0x15:
        puVar5 = (undefined2 *)&DAT_140ed4238;
        break;
      case 0x16:
        uVar8 = 3;
        puVar5 = (undefined2 *)&DAT_140ed4234;
        goto LAB_1404c55e5;
      case 0x17:
        uVar8 = 3;
        puVar5 = (undefined2 *)&DAT_140ed4230;
        goto LAB_1404c55e5;
      case 0x18:
        uVar8 = 1;
        puVar5 = (undefined2 *)&DAT_140ed422c;
        goto LAB_1404c55e5;
      case 0x19:
        puVar5 = (undefined2 *)&DAT_140ed4248;
        break;
      case 0x1a:
        uVar8 = 1;
        puVar5 = (undefined2 *)&DAT_140ed4244;
        goto LAB_1404c55e5;
      case 0x1b:
        puVar5 = (undefined2 *)&DAT_140ed4240;
        break;
      case 0x1c:
        puVar5 = (undefined2 *)&DAT_140ed423c;
        break;
      case 0x1d:
        uVar8 = 1;
        puVar5 = (undefined2 *)&DAT_140ed4258;
        goto LAB_1404c55e5;
      case 0x1e:
        puVar5 = (undefined2 *)&DAT_140ed4254;
        break;
      case 0x1f:
        puVar5 = (undefined2 *)&DAT_140ed4250;
        break;
      case 0x20:
        uVar8 = 1;
        puVar5 = (undefined2 *)&DAT_140ed424c;
        goto LAB_1404c55e5;
      case 0x21:
        puVar5 = (undefined2 *)&DAT_140ed4268;
        break;
      case 0x22:
        puVar5 = (undefined2 *)&DAT_140ed4264;
        break;
      case 0x23:
        uVar8 = 1;
        puVar5 = (undefined2 *)&DAT_140ed4260;
        goto LAB_1404c55e5;
      case 0x24:
        puVar5 = (undefined2 *)&DAT_140ed425c;
        break;
      case 0x25:
        puVar5 = (undefined2 *)&DAT_140ed4278;
        break;
      case 0x26:
        uVar8 = 1;
        puVar5 = (undefined2 *)&DAT_140ed4274;
        goto LAB_1404c55e5;
      case 0x27:
        puVar5 = (undefined2 *)&DAT_140ed4270;
        break;
      case 0x28:
        puVar5 = (undefined2 *)&DAT_140ed426c;
        break;
      default:
        goto switchD_1404c53ab_default;
      }
      uVar8 = 2;
LAB_1404c55e5:
      FUN_14000c9f0(param_1,puVar5,uVar8);
switchD_1404c53ab_default:
      bVar1 = false;
switchD_1404c52c9_default:
      FUN_14000cb40(param_1,&local_40,0,0xffffffffffffffff);
      iVar6 = iVar6 + -1;
    } while (0 < iVar6);
  }
  uVar2 = FUN_1409fc0c0();
  switch(uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1b) {
  case 0:
    uVar8 = 1;
    puVar4 = &DAT_140ed3e74;
    break;
  case 1:
    uVar8 = 1;
    puVar4 = &DAT_140ed3e70;
    break;
  case 2:
    uVar8 = 2;
    puVar4 = &DAT_140ed3e6c;
    break;
  case 3:
    uVar8 = 1;
    puVar4 = &DAT_140ed3b60;
    break;
  case 4:
    uVar8 = 2;
    puVar4 = &DAT_140ed3e68;
    break;
  case 5:
    uVar8 = 2;
    puVar4 = &DAT_140ed3e84;
    break;
  case 6:
    uVar8 = 1;
    puVar4 = &DAT_140ed4258;
    break;
  case 7:
    uVar8 = 2;
    puVar4 = &DAT_140ed3e80;
    break;
  case 8:
    uVar8 = 1;
    puVar4 = &DAT_140ed422c;
    break;
  case 9:
    uVar8 = 2;
    puVar4 = &DAT_140ed3e7c;
    break;
  case 10:
    uVar8 = 2;
    puVar4 = &DAT_140ed3e78;
    break;
  case 0xb:
    uVar8 = 1;
    puVar4 = &DAT_140ed424c;
    break;
  case 0xc:
    uVar8 = 2;
    puVar4 = &DAT_140ed3eb4;
    break;
  case 0xd:
    uVar8 = 2;
    puVar4 = &DAT_140ed3eb0;
    break;
  case 0xe:
    uVar8 = 1;
    puVar4 = &DAT_140ed3b74;
    break;
  case 0xf:
    uVar8 = 3;
    puVar4 = &DAT_140ed3eac;
    break;
  default:
    goto switchD_1404c564b_default;
  }
  FUN_14000c9f0(param_1,puVar4,uVar8);
switchD_1404c564b_default:
  uVar2 = FUN_1409fc0c0();
  uVar3 = (ulonglong)uVar2 * 3 & 0xffffffff;
  uVar2 = uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff;
  uVar7 = uVar2 >> 0x1d;
  if (uVar2 >> 0x1d == 0) {
LAB_1404c585b:
    puVar4 = &DAT_140e59dcc;
  }
  else if (uVar7 == 1) {
LAB_1404c57f0:
    puVar4 = &DAT_140e724a0;
  }
  else if (uVar7 == 2) {
    iVar6 = FUN_14000c110(&local_40,&DAT_140ed3b34);
    if ((((iVar6 != 0) && (iVar6 = FUN_14000c110(&local_40,&DAT_140ed3b68), iVar6 != 0)) &&
        (iVar6 = FUN_14000c110(&local_40,&DAT_140ed3b30), iVar6 != 0)) &&
       (iVar6 = FUN_14000c110(&local_40,&DAT_140e97f7c), iVar6 != 0)) goto LAB_1404c585b;
    puVar4 = &DAT_140e72498;
  }
  else {
    if (uVar7 != 3) goto LAB_1404c5871;
    iVar6 = FUN_14000c110(&local_40,&DAT_140ed3b34);
    if (((iVar6 != 0) && (iVar6 = FUN_14000c110(&local_40,&DAT_140ed3b68), iVar6 != 0)) &&
       ((iVar6 = FUN_14000c110(&local_40,&DAT_140ed3b30), iVar6 != 0 &&
        (iVar6 = FUN_14000c110(&local_40,&DAT_140e97f7c), iVar6 != 0)))) goto LAB_1404c57f0;
    puVar4 = &DAT_140e7249c;
  }
  uVar3 = FUN_14000c9f0(param_1,puVar4,2);
LAB_1404c5871:
  if (0xf < local_28) {
    uVar3 = FUN_140002020(CONCAT71(uStack_3f,local_40),local_28 + 1,1);
  }
  return uVar3;
}

