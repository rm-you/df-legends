// FUN_140812580 @ 140812580
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 1407ebfe0 FUN_1407ebfe0
//   -> 14048c850 FUN_14048c850
//   -> 1407ec120 FUN_1407ec120
//   -> 1407ec260 FUN_1407ec260
//   -> 140566d60 FUN_140566d60
//   -> 1407ec380 FUN_1407ec380
//   -> 140365890 FUN_140365890
//   -> 1407ec490 FUN_1407ec490
//   -> 14007cd60 FUN_14007cd60
//   -> 1407ed4f0 FUN_1407ed4f0
//   -> 14048d6d0 FUN_14048d6d0
//   -> 1407edad0 FUN_1407edad0
//   -> 14013b960 FUN_14013b960
//   -> 1407ee1a0 FUN_1407ee1a0
//   -> 1407ec560 FUN_1407ec560
//   -> 1402824c0 FUN_1402824c0
//   -> 1407ec5f0 FUN_1407ec5f0
//   -> 1407ec710 FUN_1407ec710
//   -> 140366040 FUN_140366040
//   -> 140161f40 FUN_140161f40
//   -> 1405ca6b0 FUN_1405ca6b0
//   -> 1401621e0 FUN_1401621e0
//   -> 1400c1150 FUN_1400c1150
//   -> 1407eca60 FUN_1407eca60
//   -> 14048cff0 FUN_14048cff0
//   -> 1407eea30 FUN_1407eea30
//   -> 1407ecc10 FUN_1407ecc10
//   -> 140161780 FUN_140161780
//   -> 14048cac0 FUN_14048cac0
//   -> 140365f60 FUN_140365f60
//   -> 14000c780 FUN_14000c780
//   -> 14014a650 FUN_14014a650
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 14014a240 FUN_14014a240
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140812580(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_58 = 0xfffffffffffffffe;
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_88;
  FUN_1405bba90(param_1,local_60,4);
  switch(local_60[0]) {
  case 0:
    local_68 = operator_new(0xc0);
    puVar1 = (undefined8 *)FUN_1407ebfe0(local_68,1);
    break;
  case 1:
    local_68 = operator_new(0xc0);
    puVar1 = (undefined8 *)FUN_14048c850(local_68,1);
    break;
  case 2:
    local_68 = operator_new(0xb8);
    puVar1 = (undefined8 *)FUN_1407ec120(local_68,1);
    break;
  case 3:
    local_68 = operator_new(0xb8);
    puVar1 = (undefined8 *)FUN_1407ec260(local_68,1);
    break;
  case 4:
    local_68 = operator_new(0xb8);
    puVar1 = (undefined8 *)FUN_140566d60(local_68,1);
    break;
  case 5:
    local_68 = operator_new(0xb8);
    puVar1 = (undefined8 *)FUN_140365890(local_68,1);
    break;
  case 6:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_doorst::vftable;
    break;
  case 7:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_floodgatest::vftable;
    break;
  case 8:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_bedst::vftable;
    break;
  case 9:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_chairst::vftable;
    break;
  case 10:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_chainst::vftable;
    break;
  case 0xb:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_flaskst::vftable;
    break;
  case 0xc:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_gobletst::vftable;
    break;
  case 0xd:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_instrumentst::vftable;
    puVar1[0x1c] = 0;
    break;
  case 0xe:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_toyst::vftable;
    puVar1[0x1c] = 0;
    break;
  case 0xf:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_windowst::vftable;
    break;
  case 0x10:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_cagest::vftable;
    break;
  case 0x11:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_barrelst::vftable;
    *(undefined4 *)(puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 0x8ad08ad0;
    break;
  case 0x12:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_bucketst::vftable;
    break;
  case 0x13:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_animaltrapst::vftable;
    break;
  case 0x14:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_tablest::vftable;
    break;
  case 0x15:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_coffinst::vftable;
    break;
  case 0x16:
    local_68 = operator_new(0x110);
    puVar1 = (undefined8 *)FUN_14048d6d0(local_68,1);
    break;
  case 0x17:
    puVar1 = operator_new(0x380);
    local_68 = puVar1;
    FUN_14013b960(puVar1,1);
    *puVar1 = item_corpsest::vftable;
    break;
  case 0x18:
    puVar1 = operator_new(0xf0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_weaponst::vftable;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    break;
  case 0x19:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_armorst::vftable;
    puVar1[0x1c] = 0;
    break;
  case 0x1a:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_shoesst::vftable;
    puVar1[0x1c] = 0;
    break;
  case 0x1b:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_shieldst::vftable;
    puVar1[0x1c] = 0;
    break;
  case 0x1c:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_helmst::vftable;
    puVar1[0x1c] = 0;
    break;
  case 0x1d:
    puVar1 = operator_new(0xf8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_glovesst::vftable;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    break;
  case 0x1e:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_boxst::vftable;
    break;
  case 0x1f:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_binst::vftable;
    *(undefined4 *)(puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 0x8ad08ad0;
    break;
  case 0x20:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_armorstandst::vftable;
    break;
  case 0x21:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_weaponrackst::vftable;
    break;
  case 0x22:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_cabinetst::vftable;
    break;
  case 0x23:
    local_68 = operator_new(0x110);
    puVar1 = (undefined8 *)FUN_1407ee1a0(local_68,1);
    break;
  case 0x24:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_amuletst::vftable;
    break;
  case 0x25:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_scepterst::vftable;
    break;
  case 0x26:
    puVar1 = operator_new(0xf0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_ammost::vftable;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    break;
  case 0x27:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_crownst::vftable;
    break;
  case 0x28:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_ringst::vftable;
    break;
  case 0x29:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_earringst::vftable;
    break;
  case 0x2a:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_braceletst::vftable;
    break;
  case 0x2b:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_gemst::vftable;
    *(undefined4 *)(puVar1 + 0x1c) = 0xffffffff;
    break;
  case 0x2c:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_anvilst::vftable;
    break;
  case 0x2d:
    puVar1 = operator_new(0x380);
    local_68 = puVar1;
    FUN_14013b960(puVar1,1);
    *puVar1 = item_corpsepiecest::vftable;
    break;
  case 0x2e:
    puVar1 = (undefined8 *)FUN_1407ec560();
    break;
  case 0x2f:
    local_68 = operator_new(0xc0);
    puVar1 = (undefined8 *)FUN_1402824c0(local_68,1);
    break;
  case 0x30:
    puVar1 = (undefined8 *)FUN_1407ec5f0();
    break;
  case 0x31:
    puVar1 = (undefined8 *)FUN_1407ec710();
    break;
  case 0x32:
    puVar1 = operator_new(0x138);
    local_68 = puVar1;
    FUN_140161f40(puVar1,1);
    *puVar1 = item_verminst::vftable;
    break;
  case 0x33:
    puVar1 = operator_new(0x140);
    local_68 = puVar1;
    FUN_140161f40(puVar1,1);
    *puVar1 = item_petst::vftable;
    *(undefined4 *)(puVar1 + 0x27) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x13c) = 0;
    break;
  case 0x34:
    local_68 = operator_new(0xc0);
    puVar1 = (undefined8 *)FUN_1405ca6b0(local_68,1);
    break;
  case 0x35:
    local_68 = operator_new(0xc0);
    puVar1 = (undefined8 *)FUN_1401621e0(local_68,1);
    break;
  case 0x36:
    local_68 = operator_new(0xc0);
    puVar1 = (undefined8 *)FUN_1400c1150(local_68,1);
    break;
  case 0x37:
    local_68 = operator_new(200);
    puVar1 = (undefined8 *)FUN_1407eca60(local_68,1);
    break;
  case 0x38:
    local_68 = operator_new(0xd8);
    puVar1 = (undefined8 *)FUN_14048cff0(local_68,1);
    break;
  case 0x39:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_clothst::vftable;
    *(undefined2 *)(puVar1 + 0x16) = 0x1a3;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 10000;
    break;
  case 0x3a:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_totemst::vftable;
    *(undefined2 *)(puVar1 + 0x1c) = 0xffff;
    *(undefined2 *)((longlong)puVar1 + 0xe2) = 0xffff;
    *(undefined2 *)((longlong)puVar1 + 0xe4) = 0xffff;
    break;
  case 0x3b:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_pantsst::vftable;
    puVar1[0x1c] = 0;
    break;
  case 0x3c:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_backpackst::vftable;
    break;
  case 0x3d:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_quiverst::vftable;
    break;
  case 0x3e:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_catapultpartsst::vftable;
    break;
  case 0x3f:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_ballistapartsst::vftable;
    break;
  case 0x40:
    puVar1 = operator_new(0xf0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_siegeammost::vftable;
    puVar1[0x1c] = 0;
    break;
  case 0x41:
    local_68 = operator_new(0xc0);
    puVar1 = (undefined8 *)FUN_1407ecc10(local_68,1);
    break;
  case 0x42:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_trappartsst::vftable;
    break;
  case 0x43:
    puVar1 = operator_new(0xf0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_trapcompst::vftable;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    break;
  case 0x44:
    puVar1 = operator_new(0xc0);
    local_68 = puVar1;
    FUN_140161780(puVar1,1);
    *puVar1 = item_drinkst::vftable;
    *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
    break;
  case 0x45:
    puVar1 = operator_new(0xc0);
    local_68 = puVar1;
    FUN_140161780(puVar1,1);
    *puVar1 = item_powder_miscst::vftable;
    *(undefined2 *)(puVar1 + 0x17) = 0x1a3;
    *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
    break;
  case 0x46:
    local_68 = operator_new(0xc0);
    puVar1 = (undefined8 *)FUN_14048cac0(local_68,1);
    break;
  case 0x47:
    puVar1 = operator_new(0xf8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    *puVar1 = item_foodst::vftable;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0xffffffff;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0xffff;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    break;
  case 0x48:
    puVar1 = operator_new(200);
    local_68 = puVar1;
    FUN_140161780(puVar1,1);
    *puVar1 = item_liquid_miscst::vftable;
    *(undefined2 *)(puVar1 + 0x17) = 0x1a3;
    *(undefined8 *)((longlong)puVar1 + 0xbc) = 0;
    break;
  case 0x49:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_coinst::vftable;
    *(undefined2 *)(puVar1 + 0x1c) = 0xffff;
    break;
  case 0x4a:
    local_68 = operator_new(200);
    puVar1 = (undefined8 *)FUN_140365f60(local_68,1);
    break;
  case 0x4b:
    local_68 = operator_new(0xc0);
    puVar1 = (undefined8 *)FUN_1407ec380(local_68,1);
    break;
  case 0x4c:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_pipe_sectionst::vftable;
    break;
  case 0x4d:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_hatch_coverst::vftable;
    break;
  case 0x4e:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_gratest::vftable;
    break;
  case 0x4f:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_quernst::vftable;
    break;
  case 0x50:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_millstonest::vftable;
    break;
  case 0x51:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_splintst::vftable;
    break;
  case 0x52:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_crutchst::vftable;
    break;
  case 0x53:
    puVar1 = operator_new(0xe0);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_traction_benchst::vftable;
    break;
  case 0x54:
    puVar1 = (undefined8 *)FUN_1407eea30();
    break;
  case 0x55:
    puVar1 = (undefined8 *)FUN_1407ed4f0();
    break;
  case 0x56:
    puVar1 = (undefined8 *)FUN_1407edad0();
    break;
  case 0x57:
    local_68 = operator_new(0x158);
    puVar1 = (undefined8 *)FUN_140366040(local_68,1);
    break;
  case 0x58:
    puVar1 = operator_new(0x100);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_bookst::vftable;
    puVar2 = puVar1 + 0x1c;
    puVar1[0x1f] = 0xf;
    puVar1[0x1e] = 0;
    if (0xf < (ulonglong)puVar1[0x1f]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
    break;
  case 0x59:
    puVar1 = operator_new(0xe8);
    local_68 = puVar1;
    FUN_14007cd60(puVar1,1);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *puVar1 = item_sheetst::vftable;
    *(undefined2 *)(puVar1 + 0x16) = 0x1a3;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
    puVar1[0x1c] = 10000;
    break;
  case 0x5a:
    local_68 = operator_new(0xb8);
    puVar1 = (undefined8 *)FUN_1407ec490(local_68,1);
    break;
  default:
    local_38 = 0xf;
    local_40 = 0;
    local_50 = 0;
    FUN_14000c780(&local_50,"null item load -- type: ",0x18);
    local_18 = 0xf;
    local_20 = 0;
    local_30 = 0;
    FUN_14014a650(local_60[0],&local_30);
    FUN_14000cb40(&local_50,&local_30,0,0xffffffffffffffff);
    if (0xf < local_18) {
      FUN_140002020(CONCAT71(uStack_2f,local_30),local_18 + 1,1);
    }
    FUN_14014a240(&local_50);
    if (0xf < local_38) {
      FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
    }
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}

