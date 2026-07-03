// FUN_140847920 @ 140847920
// callees:
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14084d3f0 FUN_14084d3f0
//   -> 140c303c0 FUN_140c303c0
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 140da8550 FUN_140da8550
//   -> 140004650 FUN_140004650
//   -> 14061fbe0 FUN_14061fbe0
//   -> 14000f360 FUN_14000f360
//   -> 140669610 FUN_140669610
//   -> 140d89d60 FUN_140d89d60
//   -> 140c5cc40 FUN_140c5cc40
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14014b430 FUN_14014b430
//   -> 14000c1f0 FUN_14000c1f0
//   -> 140050380 FUN_140050380
//   -> 140d3cf30 FUN_140d3cf30
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14000c260 FUN_14000c260
//   -> 140301e40 FUN_140301e40
//   -> 1400503d0 FUN_1400503d0
//   -> 14014b6b0 FUN_14014b6b0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140847920(undefined8 param_1,undefined8 *param_2,undefined2 param_3,short param_4,
                  short param_5,short param_6,undefined4 param_7,undefined8 param_8,uint param_9,
                  uint param_10,uint param_11,longlong param_12)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_338 [32];
  uint local_318;
  undefined1 local_310;
  undefined2 local_308;
  undefined8 local_2f8;
  undefined1 local_2f0 [16];
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined7 uStack_2cf;
  undefined8 local_2c0;
  ulonglong local_2b8;
  undefined1 local_2b0;
  undefined7 uStack_2af;
  undefined8 local_2a0;
  ulonglong local_298;
  undefined1 local_290;
  undefined7 uStack_28f;
  undefined8 local_280;
  ulonglong local_278;
  undefined1 local_270;
  undefined7 uStack_26f;
  undefined8 local_260;
  ulonglong local_258;
  undefined1 local_250;
  undefined7 uStack_24f;
  undefined8 local_240;
  ulonglong local_238;
  undefined1 local_230;
  undefined7 uStack_22f;
  undefined8 local_220;
  ulonglong local_218;
  undefined1 local_210;
  undefined7 uStack_20f;
  undefined8 local_200;
  ulonglong local_1f8;
  undefined1 local_1f0;
  undefined7 uStack_1ef;
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined1 local_1d0;
  undefined7 uStack_1cf;
  undefined8 local_1c0;
  ulonglong local_1b8;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  undefined8 local_1a0;
  ulonglong local_198;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined8 local_180;
  ulonglong local_178;
  undefined1 local_170;
  undefined7 uStack_16f;
  undefined8 local_160;
  ulonglong local_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 local_140;
  ulonglong local_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined8 local_120;
  ulonglong local_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  ulonglong local_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_2f8 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_338;
  local_2d8 = 0xf;
  lVar3 = 0;
  local_2e0 = 0;
  local_2f0[0] = 0;
  param_2[2] = 0;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar2 = 0;
  switch(param_3) {
  case 0:
    pcVar7 = "Carve Fortification";
    goto LAB_14084b8e8;
  case 1:
    pcVar7 = "Detail Wall";
    goto LAB_14084b8e8;
  case 2:
    pcVar7 = "Detail Floor";
    goto LAB_14084b8e8;
  case 3:
    pcVar7 = "Dig";
    goto LAB_14084b8e8;
  case 4:
    pcVar7 = "Carve Upward Staircase";
    goto LAB_14084b8e8;
  case 5:
    pcVar7 = "Carve Downward Staircase";
    goto LAB_14084b8e8;
  case 6:
    pcVar7 = "Carve Up/Down Staircase";
    goto LAB_14084b8e8;
  case 7:
    pcVar7 = "Carve Ramp";
    goto LAB_14084b8e8;
  case 8:
    pcVar7 = "Dig Channel";
    goto LAB_14084b8e8;
  case 9:
    pcVar7 = "Fell Tree";
    goto LAB_14084b8e8;
  case 10:
    pcVar7 = "Gather Plants";
    goto LAB_14084b8e8;
  case 0xb:
    pcVar7 = "Remove Construction";
    goto LAB_14084b8e8;
  case 0xc:
    pcVar7 = "Collect Webs";
    goto LAB_14084b8e8;
  case 0xd:
    pcVar7 = "Bring Item to Depot";
    goto LAB_14084b8e8;
  case 0xe:
    pcVar7 = "Bring Item to Shop";
    goto LAB_14084b8e8;
  case 0xf:
    pcVar7 = "Eat";
    goto LAB_14084b8e8;
  case 0x10:
    pcVar7 = "Get Provisions";
    goto LAB_14084b8e8;
  case 0x11:
  case 0x12:
    pcVar7 = "Drink";
    goto LAB_14084b8e8;
  case 0x13:
  case 0x14:
    pcVar7 = "Fill Waterskin";
    goto LAB_14084b8e8;
  case 0x15:
    pcVar7 = "Sleep";
    goto LAB_14084b8e8;
  case 0x16:
    FUN_14000c9f0(param_2,"Collect Sand",0xc);
    break;
  case 0x17:
    pcVar7 = "Fish";
    goto LAB_14084b8e8;
  case 0x18:
    pcVar7 = "Hunt";
    goto LAB_14084b8e8;
  case 0x19:
    pcVar7 = "Hunt for Small Creature";
    goto LAB_14084b8e8;
  case 0x1a:
    pcVar7 = "Kidnap";
    goto LAB_14084b8e8;
  case 0x1b:
    pcVar7 = "Beat Criminal";
    goto LAB_14084b8e8;
  case 0x1c:
    pcVar7 = "Starting Fist Fight";
    goto LAB_14084b8e8;
  case 0x1d:
    pcVar7 = "Collect Taxes";
    goto LAB_14084b8e8;
  case 0x1e:
    pcVar7 = "Guard Tax Collector";
    goto LAB_14084b8e8;
  case 0x1f:
    FUN_14000c9f0(param_2,"Catch Live Land Animal",0x16);
    break;
  case 0x20:
    FUN_14000c9f0(param_2,"Catch Live Fish",0xf);
    break;
  case 0x21:
    pcVar7 = "Return Kill";
    goto LAB_14084b8e8;
  case 0x23:
    pcVar7 = "Store Owned Item";
    goto LAB_14084b8e8;
  case 0x24:
    pcVar7 = "Place Item in Tomb";
    goto LAB_14084b8e8;
  case 0x25:
    pcVar7 = "Store Item in Stockpile";
    goto LAB_14084b8e8;
  case 0x26:
    pcVar7 = "Store Item in Bag";
    goto LAB_14084b8e8;
  case 0x27:
    pcVar7 = "Store Item in Hospital";
    goto LAB_14084b8e8;
  case 0x28:
    pcVar7 = "Store Item in Location";
    goto LAB_14084b8e8;
  case 0x2a:
    pcVar7 = "Store Weapon";
    goto LAB_14084b8e8;
  case 0x2b:
    pcVar7 = "Store Armor";
    goto LAB_14084b8e8;
  case 0x2c:
    pcVar7 = "Store Item in Barrel";
    goto LAB_14084b8e8;
  case 0x2d:
    pcVar7 = "Store Item in Bin";
    goto LAB_14084b8e8;
  case 0x2e:
    pcVar7 = "Seek Artifact";
    goto LAB_14084b8e8;
  case 0x2f:
    pcVar7 = "Seek Infant";
    goto LAB_14084b8e8;
  case 0x30:
    pcVar7 = "Attend Party";
    goto LAB_14084b8e8;
  case 0x31:
  case 0x32:
    pcVar7 = "Go Shopping";
    goto LAB_14084b8e8;
  case 0x33:
    pcVar7 = "Clean";
    goto LAB_14084b8e8;
  case 0x34:
    pcVar7 = "Rest";
    goto LAB_14084b8e8;
  case 0x35:
    pcVar7 = "Pickup Equipment";
    goto LAB_14084b8e8;
  case 0x36:
    pcVar7 = "Dump Item";
    goto LAB_14084b8e8;
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
    pcVar7 = "Strange Mood";
    goto LAB_14084b8e8;
  case 0x44:
    FUN_14000c9f0(param_2,"Construct Building",0x12);
    break;
  case 0x45:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 7)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 6) & 2) == 0)) {
      FUN_14000c9f0(param_2," Door",5);
    }
    else {
      FUN_14000c9f0(param_2," Portal",7);
    }
    break;
  case 0x46:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Floodgate",10);
    break;
  case 0x47:
    FUN_14000c1f0(param_2,"Construct");
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 3) == 0)) {
      FUN_14000c1f0(param_2,&DAT_140e59864);
      local_308 = 0;
      local_310 = 1;
      local_318 = param_11;
      FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
      FUN_140050380(param_2,local_2f0);
    }
    pcVar7 = " Bed";
    goto LAB_14084b8e8;
  case 0x48:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    if (((ushort)(param_6 - 0x1a3U) < 200) || ((param_11 & 0x1003) != 0)) {
      FUN_14000c9f0(param_2," Chair",6);
    }
    else {
      FUN_14000c9f0(param_2," Throne",7);
    }
    break;
  case 0x49:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    if (((ushort)(param_6 - 0x1a3U) < 200) || ((param_11 & 0x1003) != 0)) {
      FUN_14000c9f0(param_2," Casket",7);
    }
    else {
      lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
      if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
         ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
        FUN_14000c9f0(param_2," Coffin",7);
      }
      else {
        FUN_14000c9f0(param_2," Sarcophagus",0xc);
      }
    }
    break;
  case 0x4a:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Table",6);
    break;
  case 0x4b:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 7)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 6) & 2) == 0)) {
      if ((param_6 == 0) &&
         (((lVar3 = FUN_140d89d60(&DAT_141c53470,0,param_7), lVar3 == 0 ||
           (*(int *)(lVar3 + 0x298) < 6)) ||
          ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)))) {
        FUN_14000c9f0(param_2," Coffer",7);
      }
      else if (((param_11 & 2) == 0) &&
              (((ushort)(param_6 - 0x1a3U) < 200 || ((param_11 & 0x101d) != 0)))) {
        FUN_14000c9f0(param_2,&DAT_140e8bd80,4);
      }
      else {
        FUN_14000c9f0(param_2," Chest",6);
      }
    }
    else {
      FUN_14000c9f0(param_2,&DAT_140f2f2ec,4);
    }
    break;
  case 0x4c:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2,&DAT_140f182dc,4);
    break;
  case 0x4d:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Armor Stand",0xc);
    break;
  case 0x4e:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Weapon Rack",0xc);
    break;
  case 0x4f:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Cabinet",8);
    break;
  case 0x50:
    FUN_14000c1f0(param_2,"Construct ");
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_140050380(param_2,local_2f0);
    pcVar7 = " Statue";
    goto LAB_14084b8e8;
  case 0x51:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Blocks",7);
    break;
  case 0x52:
    uVar8 = 9;
    pcVar7 = "Make Raw ";
    goto LAB_140848c70;
  case 0x53:
    FUN_14000c9f0(param_2,"Make ",5);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Crafts",7);
    break;
  case 0x54:
    FUN_14000c9f0(param_2,"Mint ",5);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Coins",6);
    break;
  case 0x55:
  case 0x56:
    uVar8 = 4;
    pcVar7 = "Cut ";
    goto LAB_140848c70;
  case 0x57:
    FUN_14000c9f0(param_2,"Encrust ",8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_14000c9f0(param_2,"Finished Goods",0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_14000c9f0(param_2,"Furniture",9);
    }
    if ((param_9 & 0x40) != 0) {
      FUN_14000c9f0(param_2,&DAT_140eb5c14,4);
    }
LAB_140848f58:
    uVar8 = 6;
    pcVar7 = " With ";
    goto LAB_140848c70;
  case 0x58:
    FUN_14000c9f0(param_2,"Encrust ",8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_14000c9f0(param_2,"Finished Goods",0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_14000c9f0(param_2,"Furniture",9);
    }
    if ((param_9 & 0x40) == 0) goto LAB_140848f58;
    FUN_14000c9f0(param_2,&DAT_140eb5c14,4);
    uVar8 = 6;
    pcVar7 = " With ";
    goto LAB_140848c70;
  case 0x59:
    FUN_14000c9f0(param_2,"Destroy Building",0x10);
    break;
  case 0x5a:
    FUN_14000c1f0(param_2,"Smelt ");
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_140050380(param_2,local_2f0);
    pcVar7 = " Ore";
    goto LAB_14084b8e8;
  case 0x5b:
    pcVar7 = "Melt a Metal Object";
    goto LAB_14084b8e8;
  case 0x5c:
    pcVar7 = "Extract Metal Strands";
    goto LAB_14084b8e8;
  case 0x5d:
    pcVar7 = "Plant Seeds";
    goto LAB_14084b8e8;
  case 0x5e:
    pcVar7 = "Harvest Plants";
    goto LAB_14084b8e8;
  case 0x5f:
    FUN_14000c1f0(param_2,"Train ");
    if (param_12 != 0) {
      lVar3 = FUN_14084d3f0(param_12,0xf);
      if (lVar3 != 0) {
        FUN_14000c2b0(local_b0);
        FUN_140c303c0(lVar3,local_b0,0);
        FUN_140050380(param_2,local_b0);
        FUN_14000c1f0(param_2," to Hunt");
        FUN_14000c260(local_b0);
      }
      break;
    }
    pcVar7 = "Hunting Animal";
    goto LAB_14084b8e8;
  case 0x60:
    FUN_14000c1f0(param_2,"Train ");
    if (param_12 != 0) {
      lVar3 = FUN_14084d3f0(param_12,0xf);
      if (lVar3 != 0) {
        FUN_14000c2b0(local_90);
        FUN_140c303c0(lVar3,local_90,0);
        FUN_140050380(param_2,local_90);
        FUN_14000c1f0(param_2," for War");
        FUN_14000c260(local_90);
      }
      break;
    }
    pcVar7 = "War Animal";
    goto LAB_14084b8e8;
  case 0x61:
    cVar1 = FUN_140d3cf30(&DAT_141c53470,0x2f,param_6,param_7);
    pcVar7 = "Forge ";
    if (cVar1 == '\0') {
      pcVar7 = "Make ";
    }
    FUN_14000c1f0(param_2,pcVar7);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_140050380(param_2,local_2f0);
    FUN_14000c1f0(param_2,&DAT_140e59864);
    lVar3 = DAT_141d6ddd0;
    goto LAB_14084ab8a;
  case 0x62:
    FUN_14000c1f0(param_2,"Forge ");
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_140050380(param_2,local_2f0);
    pcVar7 = " Anvil";
    goto LAB_14084b8e8;
  case 99:
    FUN_14000c1f0(param_2,"Construct");
    if ((param_11 & 2) == 0) {
      FUN_14000c1f0(param_2,&DAT_140e59864);
      local_308 = 0;
      local_310 = 1;
      local_318 = param_11;
      FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
      FUN_140050380(param_2,local_2f0);
    }
    pcVar7 = " Catapult Parts";
    goto LAB_14084b8e8;
  case 100:
    FUN_14000c1f0(param_2,"Construct");
    if ((param_11 & 2) == 0) {
      FUN_14000c1f0(param_2,&DAT_140e59864);
      local_308 = 0;
      local_310 = 1;
      local_318 = param_11;
      FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
      FUN_140050380(param_2,local_2f0);
    }
    pcVar7 = " Ballista Parts";
    goto LAB_14084b8e8;
  case 0x65:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    if (((DAT_1410b67dc == 0) && (param_10 != 0xffffffff)) && (param_10 != (int)DAT_141c36b8c)) {
      iVar5 = FUN_140c5cc40(0x19,param_5,param_10 & 0xffff);
      if (iVar5 == 1) {
        pcVar7 = "small ";
      }
      else {
        if (iVar5 != 2) goto LAB_14084ab33;
        pcVar7 = "large ";
      }
      FUN_14000c9f0(param_2,pcVar7,6);
    }
LAB_14084ab33:
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c1f0(param_2,&DAT_140e59864);
    lVar3 = DAT_141d6e0b8;
    goto LAB_14084ab8a;
  case 0x66:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    if (((DAT_1410b67dc == 0) && (param_10 != 0xffffffff)) && (param_10 != (int)DAT_141c36b8c)) {
      iVar5 = FUN_140c5cc40(0x1c,param_5,param_10 & 0xffff);
      if (iVar5 == 1) {
        pcVar7 = "small ";
      }
      else {
        if (iVar5 != 2) goto LAB_14084a875;
        pcVar7 = "large ";
      }
      FUN_14000c9f0(param_2,pcVar7,6);
    }
LAB_14084a875:
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2,&DAT_140e59864,1);
    puVar6 = (undefined1 *)(*(longlong *)(DAT_141d6e148 + (longlong)param_5 * 8) + 0x60);
    goto LAB_140848cb2;
  case 0x67:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    if (((DAT_1410b67dc == 0) && (param_10 != 0xffffffff)) && (param_10 != (int)DAT_141c36b8c)) {
      iVar5 = FUN_140c5cc40(0x3b,param_5,param_10 & 0xffff);
      if (iVar5 == 1) {
        pcVar7 = "small ";
      }
      else {
        if (iVar5 != 2) goto LAB_14084a998;
        pcVar7 = "large ";
      }
      FUN_14000c9f0(param_2,pcVar7,6);
    }
LAB_14084a998:
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2,&DAT_140e59864,1);
    puVar6 = (undefined1 *)(*(longlong *)(DAT_141d6e160 + (longlong)param_5 * 8) + 0x60);
    goto LAB_140848cb2;
  case 0x68:
    uVar8 = 10;
    pcVar7 = "Stud With ";
    goto LAB_140848c70;
  case 0x69:
    FUN_14000c9f0(param_2,"Butcher an Animal",0x11);
    break;
  case 0x6a:
    FUN_14000c9f0(param_2,"Prepare a Raw Fish",0x12);
    break;
  case 0x6b:
    FUN_14000c9f0(param_2,"Mill Plants",0xb);
    break;
  case 0x6c:
    FUN_14000c9f0(param_2,"Bait Trap with ",0xf);
    if (param_4 == 0x2b) {
      FUN_14000c9f0(param_2,&DAT_140e8bdd0,3);
    }
    else if (param_4 == 0x2f) {
      FUN_14000c9f0(param_2,&DAT_140eb5a24,4);
    }
    else if (param_4 == 0x30) {
      FUN_14000c9f0(param_2,&DAT_140eb5a1c,4);
    }
    break;
  case 0x6d:
    FUN_14000c9f0(param_2,"Milk ",5);
    if ((param_12 != 0) && (lVar3 = FUN_14084d3f0(param_12,0xe), lVar3 != 0)) {
      local_298 = 0xf;
      local_2a0 = 0;
      local_2b0 = 0;
      FUN_140c303c0(lVar3,&local_2b0,0);
      FUN_14000cb40(param_2,&local_2b0,0,0xffffffffffffffff);
      if (0xf < local_298) {
        FUN_140002020(CONCAT71(uStack_2af,local_2b0),local_298 + 1,1);
      }
      local_298 = 0xf;
      local_2a0 = 0;
      local_2b0 = 0;
      break;
    }
    goto LAB_140847b2d;
  case 0x6e:
    FUN_14000c9f0(param_2,"Make Cheese",0xb);
    break;
  case 0x6f:
    FUN_14000c9f0(param_2,"Process Plants",0xe);
    break;
  case 0x71:
    FUN_14000c9f0(param_2,"Process Plants (Vial)",0x15);
    break;
  case 0x72:
    FUN_14000c9f0(param_2,"Process Plants (Barrel)",0x17);
    break;
  case 0x73:
    if (param_6 == 2) {
      FUN_14000c9f0(param_2,"Prepare Easy Meal",0x11);
    }
    else if (param_6 == 3) {
      FUN_14000c9f0(param_2,"Prepare Fine Meal",0x11);
    }
    else if (param_6 == 4) {
      FUN_14000c9f0(param_2,"Prepare Lavish Meal",0x13);
    }
    break;
  case 0x74:
    cVar1 = FUN_140d3cf30(&DAT_141c53470,0x2f,param_6,param_7);
    if (cVar1 == '\0') {
      if ((param_11 & 8) == 0) {
        pcVar7 = "Weave Yarn into Cloth";
        if ((param_11 >> 0xc & 1) == 0) {
          pcVar7 = "Weave Thread into Cloth";
        }
      }
      else {
        pcVar7 = "Weave Thread into Silk";
      }
    }
    else {
      pcVar7 = "Weave Metal Cloth";
    }
    FUN_14000c1f0(param_2,pcVar7);
    if (param_9 == 0) break;
    pcVar7 = " (Dyed Only)";
    goto LAB_14084b8e8;
  case 0x75:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    if (((DAT_1410b67dc == 0) && (param_10 != 0xffffffff)) && (param_10 != (int)DAT_141c36b8c)) {
      iVar5 = FUN_140c5cc40(0x1d,param_5,param_10 & 0xffff);
      if (iVar5 == 1) {
        pcVar7 = "small ";
      }
      else {
        if (iVar5 != 2) goto LAB_140849a13;
        pcVar7 = "large ";
      }
      FUN_14000c9f0(param_2,pcVar7,6);
    }
LAB_140849a13:
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2,&DAT_140e59864,1);
    puVar6 = (undefined1 *)(*(longlong *)(DAT_141d6e100 + (longlong)param_5 * 8) + 0x60);
    goto LAB_140848cb2;
  case 0x76:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    if (((DAT_1410b67dc == 0) && (param_10 != 0xffffffff)) && (param_10 != (int)DAT_141c36b8c)) {
      iVar5 = FUN_140c5cc40(0x1a,param_5,param_10 & 0xffff);
      if (iVar5 == 1) {
        pcVar7 = "small ";
      }
      else {
        if (iVar5 != 2) goto LAB_140849b50;
        pcVar7 = "large ";
      }
      FUN_14000c9f0(param_2,pcVar7,6);
    }
LAB_140849b50:
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2,&DAT_140e59864,1);
    puVar6 = (undefined1 *)(*(longlong *)(DAT_141d6e118 + (longlong)param_5 * 8) + 0x60);
    goto LAB_140848cb2;
  case 0x77:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2,&DAT_140e59864,1);
    puVar6 = (undefined1 *)(*(longlong *)(DAT_141d6e130 + (longlong)param_5 * 8) + 0x60);
    goto LAB_140848cb2;
  case 0x78:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 7)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 6) & 2) == 0)) {
      FUN_14000c9f0(param_2," Cage",5);
    }
    else {
      FUN_14000c9f0(param_2," Terrarium",10);
    }
    break;
  case 0x79:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    if (((param_11 & 2) == 0) &&
       ((((param_11 & 8) != 0 || ((ushort)(param_6 - 0x1a3U) < 200)) || ((param_11 & 0x1015) != 0)))
       ) {
      FUN_14000c9f0(param_2," Rope",5);
    }
    else {
      FUN_14000c9f0(param_2," Chain",6);
    }
    break;
  case 0x7a:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    if ((param_11 & 0x10) == 0) {
      lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
      if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 7)) ||
         ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 6) & 2) == 0)) {
        FUN_14000c9f0(param_2," Flask",6);
      }
      else {
        FUN_14000c9f0(param_2," Vial",5);
      }
    }
    else {
      FUN_14000c9f0(param_2," Waterskin",10);
    }
    break;
  case 0x7b:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    if (((ushort)(param_6 - 0x1a3U) < 200) || ((param_11 & 0x1003) != 0)) {
      FUN_14000c9f0(param_2,&DAT_140f2f434,4);
    }
    else if ((param_6 == 0) &&
            (((lVar3 = FUN_140d89d60(&DAT_141c53470,0,param_7), lVar3 == 0 ||
              (*(int *)(lVar3 + 0x298) < 6)) ||
             ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)))) {
      FUN_14000c9f0(param_2,&DAT_140f2f43c,4);
    }
    else {
      FUN_14000c9f0(param_2," Goblet",7);
    }
    break;
  case 0x7d:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2,&DAT_140f2f478,4);
    break;
  case 0x7e:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Animal Trap",0xc);
    break;
  case 0x7f:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Barrel",7);
    break;
  case 0x80:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Bucket",7);
    break;
  case 0x81:
    FUN_14000c9f0(param_2,"Make ",5);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Window",7);
    break;
  case 0x82:
    FUN_14000c9f0(param_2,"Make Totem",10);
    break;
  case 0x83:
    cVar1 = FUN_140d3cf30(&DAT_141c53470,0x2f,param_6,param_7);
    pcVar7 = "Forge ";
    if (cVar1 == '\0') {
      pcVar7 = "Make ";
    }
    FUN_14000c1f0(param_2,pcVar7);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_140050380(param_2,local_2f0);
    FUN_14000c1f0(param_2,&DAT_140e59864);
    lVar3 = *(longlong *)(DAT_141d6e0d0 + (longlong)param_5 * 8) + 0x80;
    goto LAB_14084ab96;
  case 0x84:
    uVar8 = 0xe;
    pcVar7 = "Decorate With ";
LAB_140848c70:
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    local_308 = 0;
    local_310 = 0;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    puVar6 = local_2f0;
LAB_140848cb2:
    FUN_14000cb40(param_2,puVar6,0,0xffffffffffffffff);
    break;
  case 0x85:
    FUN_14000c9f0(param_2,"Make ",5);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Backpack",9);
    break;
  case 0x86:
    FUN_14000c9f0(param_2,"Make ",5);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Quiver",7);
    break;
  case 0x87:
    cVar1 = FUN_140d3cf30(&DAT_141c53470,0x2f,param_6,param_7);
    pcVar7 = "Forge ";
    if (cVar1 == '\0') {
      pcVar7 = "Make ";
    }
    FUN_14000c1f0(param_2,pcVar7);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_140050380(param_2,local_2f0);
    pcVar7 = " Ballista Arrow Head";
    goto LAB_14084b8e8;
  case 0x88:
    FUN_14000c1f0(param_2,"Assemble ");
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_140050380(param_2,local_2f0);
    FUN_14000c1f0(param_2,&DAT_140e59864);
    lVar3 = DAT_141d6e0e8;
LAB_14084ab8a:
    lVar3 = *(longlong *)(lVar3 + (longlong)param_5 * 8);
LAB_14084ab92:
    lVar3 = lVar3 + 0x60;
LAB_14084ab96:
    FUN_140050380(param_2,lVar3);
    break;
  case 0x89:
    pcVar7 = "Load Catapult";
    goto LAB_14084b8e8;
  case 0x8a:
    pcVar7 = "Load Ballista";
    goto LAB_14084b8e8;
  case 0x8b:
    pcVar7 = "Fire Catapult";
    goto LAB_14084b8e8;
  case 0x8c:
    pcVar7 = "Fire Ballista";
    goto LAB_14084b8e8;
  case 0x8d:
    FUN_14000c1f0(param_2,"Construct");
    FUN_14000c1f0(param_2,&DAT_140e59864);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_140050380(param_2,local_2f0);
    pcVar7 = " Mechanisms";
    goto LAB_14084b8e8;
  case 0x8e:
    cVar1 = FUN_140d3cf30(&DAT_141c53470,0x2f,param_6,param_7);
    pcVar7 = "Forge ";
    if (cVar1 == '\0') {
      pcVar7 = "Make ";
    }
    FUN_14000c1f0(param_2,pcVar7);
    if (*(longlong *)(*(longlong *)(DAT_141d6dde8 + (longlong)param_5 * 8) + 0xb0) != 0) {
      FUN_140050380(param_2);
      FUN_14000c1f0(param_2,&DAT_140e59864);
    }
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_140050380(param_2,local_2f0);
    FUN_14000c1f0(param_2,&DAT_140e59864);
    lVar3 = *(longlong *)(DAT_141d6dde8 + (longlong)param_5 * 8);
    goto LAB_14084ab92;
  case 0x8f:
    pcVar7 = "Load Cage Trap";
    goto LAB_14084b8e8;
  case 0x90:
    pcVar7 = "Load Stone Trap";
    goto LAB_14084b8e8;
  case 0x91:
    pcVar7 = "Load Weapon Trap";
    goto LAB_14084b8e8;
  case 0x92:
    pcVar7 = "Clean Trap";
    goto LAB_14084b8e8;
  case 0x94:
    pcVar7 = "Link a Building to Trigger";
    goto LAB_14084b8e8;
  case 0x95:
    pcVar7 = "Pull the Lever";
    goto LAB_14084b8e8;
  case 0x97:
    FUN_14000c9f0(param_2,"Extract from Plants",0x13);
    break;
  case 0x98:
    FUN_14000c9f0(param_2,"Extract from Raw Fish",0x15);
    break;
  case 0x99:
    FUN_14000c9f0(param_2,"Extract from Land Animal",0x18);
    break;
  case 0x9a:
    FUN_14000c9f0(param_2,"Tame a Small Animal",0x13);
    break;
  case 0x9b:
    FUN_14000c9f0(param_2,"Tame ",5);
    if (param_12 != 0) {
      lVar3 = FUN_14084d3f0(param_12,0xf);
      if (lVar3 != 0) {
        local_118 = 0xf;
        local_120 = 0;
        local_130 = 0;
        FUN_140c303c0(lVar3,&local_130,0);
        FUN_14000cb40(param_2,&local_130,0,0xffffffffffffffff);
        if (0xf < local_118) {
          FUN_140002020(CONCAT71(uStack_12f,local_130),local_118 + 1,1);
        }
        local_118 = 0xf;
        local_120 = 0;
        local_130 = 0;
      }
      break;
    }
    goto LAB_140847dd1;
  case 0x9c:
    if ((param_12 == 0) || (lVar3 = FUN_14084d3f0(param_12,0x14), lVar3 == 0)) {
      FUN_14000c9f0(param_2,"Put In Chains",0xd);
    }
    else {
      FUN_14000c9f0(param_2,"Chain ",6);
      local_198 = 0xf;
      local_1a0 = 0;
      local_1b0 = 0;
      FUN_140c303c0(lVar3,&local_1b0,0);
      FUN_14000cb40(param_2,&local_1b0,0,0xffffffffffffffff);
      if (0xf < local_198) {
        FUN_140002020(CONCAT71(uStack_1af,local_1b0),local_198 + 1,1);
      }
      local_198 = 0xf;
      local_1a0 = 0;
      local_1b0 = 0;
    }
    break;
  case 0x9d:
    FUN_14000c9f0(param_2,"Unchain",7);
    if ((param_12 != 0) && (lVar3 = FUN_14084d3f0(param_12,0x14), lVar3 != 0)) {
      FUN_14000c9f0(param_2,&DAT_140e59864,1);
      local_138 = 0xf;
      local_140 = 0;
      local_150 = 0;
      FUN_140c303c0(lVar3,&local_150,0);
      FUN_14000cb40(param_2,&local_150,0,0xffffffffffffffff);
      if (0xf < local_138) {
        FUN_140002020(CONCAT71(uStack_14f,local_150),local_138 + 1,1);
      }
      local_138 = 0xf;
      local_140 = 0;
      local_150 = 0;
    }
    break;
  case 0x9e:
    FUN_14000c9f0(param_2,"Unchain Pet",0xb);
    break;
  case 0x9f:
    FUN_14000c9f0(param_2,"Release ",8);
    if ((param_12 != 0) && (lVar3 = FUN_14084d3f0(param_12,0x14), lVar3 != 0)) {
      local_218 = 0xf;
      local_220 = 0;
      local_230 = 0;
      FUN_140c303c0(lVar3,&local_230,0);
      FUN_14000cb40(param_2,&local_230,0,0xffffffffffffffff);
      if (0xf < local_218) {
        FUN_140002020(CONCAT71(uStack_22f,local_230),local_218 + 1,1);
      }
      local_218 = 0xf;
      local_220 = 0;
      local_230 = 0;
      break;
    }
    goto LAB_140847dd1;
  case 0xa0:
    FUN_14000c9f0(param_2,"Release Pet",0xb);
    break;
  case 0xa1:
    FUN_14000c9f0(param_2,"Release Small Creature",0x16);
    break;
  case 0xa2:
    FUN_14000c9f0(param_2,"Handle Small Creature",0x15);
    break;
  case 0xa3:
    FUN_14000c9f0(param_2,"Handle ",7);
    if ((param_12 != 0) && (lVar3 = FUN_14084d3f0(param_12,0x14), lVar3 != 0)) {
      local_258 = 0xf;
      local_260 = 0;
      local_270 = 0;
      FUN_140c303c0(lVar3,&local_270,0);
      FUN_14000cb40(param_2,&local_270,0,0xffffffffffffffff);
      if (0xf < local_258) {
        FUN_140002020(CONCAT71(uStack_26f,local_270),local_258 + 1,1);
      }
      local_258 = 0xf;
      local_260 = 0;
      local_270 = 0;
      break;
    }
    goto LAB_140847dd1;
  case 0xa4:
    FUN_14000c9f0(param_2,"Cage ",5);
    if ((param_12 != 0) && (lVar3 = FUN_14084d3f0(param_12,0x14), lVar3 != 0)) {
      local_1f8 = 0xf;
      local_200 = 0;
      local_210 = 0;
      FUN_140c303c0(lVar3,&local_210,0);
      FUN_14000cb40(param_2,&local_210,0,0xffffffffffffffff);
      if (0xf < local_1f8) {
        FUN_140002020(CONCAT71(uStack_20f,local_210),local_1f8 + 1,1);
      }
      local_1f8 = 0xf;
      local_200 = 0;
      local_210 = 0;
      break;
    }
    goto LAB_140847dd1;
  case 0xa5:
    FUN_14000c9f0(param_2,"Cage Small Animal",0x11);
    break;
  case 0xa6:
    FUN_14000c9f0(param_2,"Recover Wounded",0xf);
    break;
  case 0xa7:
    FUN_14000c9f0(param_2,"Diagnose Patient",0x10);
    break;
  case 0xa8:
    FUN_14000c9f0(param_2,"Immobilize Break",0x10);
    break;
  case 0xa9:
    FUN_14000c9f0(param_2,"Dress Wound",0xb);
    break;
  case 0xaa:
    FUN_14000c9f0(param_2,"Clean Patient",0xd);
    break;
  case 0xab:
    FUN_14000c9f0(param_2,"Surgery",7);
    break;
  case 0xac:
    FUN_14000c9f0(param_2,"Suture",6);
    break;
  case 0xad:
    FUN_14000c9f0(param_2,"Set Bone",8);
    break;
  case 0xae:
    FUN_14000c9f0(param_2,"Place In Traction",0x11);
    break;
  case 0xaf:
    FUN_14000c9f0(param_2,"Drain Aquarium",0xe);
    break;
  case 0xb0:
    FUN_14000c9f0(param_2,"Fill Aquarium",0xd);
    break;
  case 0xb1:
    FUN_14000c9f0(param_2,"Fill Pond",9);
    break;
  case 0xb2:
  case 0xb4:
    FUN_14000c9f0(param_2,"Give Water",10);
    break;
  case 0xb3:
  case 0xb5:
    FUN_14000c9f0(param_2,"Give Food",9);
    break;
  case 0xb6:
    FUN_14000c9f0(param_2,"Recover Pet",0xb);
    break;
  case 0xb7:
    FUN_14000c9f0(param_2,"Pit/Pond ",9);
    if ((param_12 != 0) && (lVar3 = FUN_14084d3f0(param_12,0x14), lVar3 != 0)) {
      local_1d8 = 0xf;
      local_1e0 = 0;
      local_1f0 = 0;
      FUN_140c303c0(lVar3,&local_1f0,0);
      FUN_14000cb40(param_2,&local_1f0,0,0xffffffffffffffff);
      if (0xf < local_1d8) {
        FUN_140002020(CONCAT71(uStack_1ef,local_1f0),local_1d8 + 1,1);
      }
      local_1d8 = 0xf;
      local_1e0 = 0;
      local_1f0 = 0;
      break;
    }
    goto LAB_140847dd1;
  case 0xb8:
    FUN_14000c9f0(param_2,"Pit/Pond Small Animal",0x15);
    break;
  case 0xb9:
    FUN_14000c9f0(param_2,"Slaughter ",10);
    if ((param_12 != 0) && (lVar3 = FUN_14084d3f0(param_12,0x1a), lVar3 != 0)) {
      local_178 = 0xf;
      local_180 = 0;
      local_190 = 0;
      FUN_140c303c0(lVar3,&local_190,0);
      FUN_14000cb40(param_2,&local_190,0,0xffffffffffffffff);
      if (0xf < local_178) {
        FUN_140002020(CONCAT71(uStack_18f,local_190),local_178 + 1,1);
      }
      local_178 = 0xf;
      local_180 = 0;
      local_190 = 0;
      break;
    }
    goto LAB_140847b2d;
  case 0xba:
    pcVar7 = "Make Charcoal";
    goto LAB_14084b8e8;
  case 0xbb:
    pcVar7 = "Make Ash";
    goto LAB_14084b8e8;
  case 0xbc:
    FUN_14000c9f0(param_2,"Make Lye",8);
    break;
  case 0xbd:
    FUN_14000c9f0(param_2,"Make Potash From Lye",0x14);
    break;
  case 0xbe:
    pcVar7 = "Fertilize Field";
    goto LAB_14084b8e8;
  case 0xbf:
    FUN_14000c9f0(param_2,"Make Potash From Ash",0x14);
    break;
  case 0xc0:
    pcVar7 = "Dye Thread";
    goto LAB_14084b8e8;
  case 0xc1:
    pcVar7 = "Dye Cloth";
    goto LAB_14084b8e8;
  case 0xc2:
    FUN_14000c1f0(param_2,&DAT_140f2f2dc);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_140050380(param_2,local_2f0);
    pcVar7 = " Image";
    goto LAB_14084b8e8;
  case 0xc3:
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    lVar3 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x298) < 7)) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x290) + 6) & 2) == 0)) {
      FUN_14000c9f0(param_2," Pipe Section",0xd);
    }
    else {
      FUN_14000c9f0(param_2," Tube",5);
    }
    break;
  case 0xc4:
    pcVar7 = "Operate Pump";
    goto LAB_14084b8e8;
  case 0xc5:
    FUN_14000c9f0(param_2,"Manage Work Orders",0x12);
    break;
  case 0xc6:
    FUN_14000c9f0(param_2,"Update Stockpile Records",0x18);
    break;
  case 199:
    FUN_14000c9f0(param_2,"Trade at Depot",0xe);
    break;
  case 200:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Hatch Cover",0xc);
    break;
  case 0xc9:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Grate",6);
    break;
  case 0xca:
    pcVar7 = "Remove Stairs/Ramps";
    goto LAB_14084b8e8;
  case 0xcb:
    FUN_14000c1f0(param_2,"Construct ");
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_140050380(param_2,local_2f0);
    pcVar7 = " Quern";
    goto LAB_14084b8e8;
  case 0xcc:
    FUN_14000c1f0(param_2,"Construct ");
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_140050380(param_2,local_2f0);
    pcVar7 = " Millstone";
    goto LAB_14084b8e8;
  case 0xcd:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Splint",7);
    break;
  case 0xce:
    FUN_14000c9f0(param_2,"Construct ",10);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Crutch",7);
    break;
  case 0xcf:
    FUN_14000c9f0(param_2,"Construct Traction Bench",0x18);
    break;
  case 0xd0:
    pcVar7 = "Clean Self";
    goto LAB_14084b8e8;
  case 0xd1:
    FUN_14000c9f0(param_2,"Bring Crutch",0xc);
    break;
  case 0xd2:
    FUN_14000c9f0(param_2,"Apply Cast",10);
    break;
  case 0xd3:
    lVar3 = FUN_140301e40(&DAT_141d77940,param_8);
    if (lVar3 != 0) {
      FUN_1400503d0(local_50,lVar3 + 0x20);
      FUN_14014b6b0(local_50);
      FUN_140050380(param_2,local_50);
      FUN_14000c260(local_50);
      break;
    }
    pcVar7 = "Reaction";
    goto LAB_14084b8e8;
  case 0xd4:
    FUN_14000c1f0(param_2,"Construct ");
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_140050380(param_2,local_2f0);
    pcVar7 = " Slab";
    goto LAB_14084b8e8;
  case 0xd5:
    if ((param_10 == 0xffffffff) || (lVar3 = FUN_140004650(&DAT_141d7a048,param_10), lVar3 == 0)) {
      FUN_14000c9f0(param_2,"Engrave Memorial Slab",0x15);
    }
    else {
      if (*(char *)(lVar3 + 0xaa) == '\0') {
        lVar4 = FUN_14000f360(&DAT_141c66fd0,*(undefined4 *)(lVar3 + 0xd8));
        if (lVar4 == 0) {
          local_b8 = 0xf;
          local_c0 = 0;
          local_d0 = 0;
          FUN_140669610(*(undefined2 *)(lVar3 + 2),&local_d0,0,*(undefined2 *)(lVar3 + 4));
          FUN_14000cb40(param_2,&local_d0,0,0xffffffffffffffff);
          if (0xf < local_b8) {
            FUN_140002020(CONCAT71(uStack_cf,local_d0),local_b8 + 1,1);
          }
          local_b8 = 0xf;
          local_c0 = 0;
          local_d0 = 0;
        }
        else {
          local_d8 = 0xf;
          local_e0 = 0;
          local_f0 = 0;
          FUN_140c303c0(lVar4,&local_f0,0);
          FUN_14000cb40(param_2,&local_f0,0,0xffffffffffffffff);
          if (0xf < local_d8) {
            FUN_140002020(CONCAT71(uStack_ef,local_f0),local_d8 + 1,1);
          }
          local_d8 = 0xf;
          local_e0 = 0;
          local_f0 = 0;
        }
      }
      else {
        local_f8 = 0xf;
        local_100 = 0;
        local_110 = 0;
        FUN_14061fbe0(lVar3 + 0x38,&local_110);
        FUN_14000cb40(param_2,&local_110,0,0xffffffffffffffff);
        if (0xf < local_f8) {
          FUN_140002020(CONCAT71(uStack_10f,local_110),local_f8 + 1,1);
        }
        local_f8 = 0xf;
        local_100 = 0;
        local_110 = 0;
      }
      FUN_14000c9f0(param_2," (Engrave Memorial)",0x13);
    }
    break;
  case 0xd6:
    FUN_14000c9f0(param_2,"Shear ",6);
    if ((param_12 != 0) && (lVar3 = FUN_14084d3f0(param_12,0x1b), lVar3 != 0)) {
      local_278 = 0xf;
      local_280 = 0;
      local_290 = 0;
      FUN_140c303c0(lVar3,&local_290,0);
      FUN_14000cb40(param_2,&local_290,0,0xffffffffffffffff);
      if (0xf < local_278) {
        FUN_140002020(CONCAT71(uStack_28f,local_290),local_278 + 1,1);
      }
      local_278 = 0xf;
      local_280 = 0;
      local_290 = 0;
      break;
    }
    goto LAB_140847b2d;
  case 0xd7:
    FUN_14000c9f0(param_2,"Spin Thread",0xb);
    break;
  case 0xd8:
    FUN_14000c9f0(param_2,"Pen/Pasture ",0xc);
    if ((param_12 != 0) && (lVar3 = FUN_14084d3f0(param_12,0x14), lVar3 != 0)) {
      local_1b8 = 0xf;
      local_1c0 = 0;
      local_1d0 = 0;
      FUN_140c303c0(lVar3,&local_1d0,0);
      FUN_14000cb40(param_2,&local_1d0,0,0xffffffffffffffff);
      if (0xf < local_1b8) {
        FUN_140002020(CONCAT71(uStack_1cf,local_1d0),local_1b8 + 1,1);
      }
      local_1b8 = 0xf;
      local_1c0 = 0;
      local_1d0 = 0;
      break;
    }
LAB_140847dd1:
    FUN_14000c9f0(param_2,"a Large Animal",0xe);
    break;
  case 0xd9:
    FUN_14000c9f0(param_2,"Pen/Pasture Small Animal",0x18);
    break;
  case 0xda:
    lVar4 = FUN_140d89d60(&DAT_141c53470,param_6,param_7);
    if (((lVar4 == 0) || (*(int *)(lVar4 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar4 + 0x290) + 5) & 0x80) == 0)) {
      uVar8 = 5;
      pcVar7 = "Make ";
    }
    else {
      uVar8 = 6;
      pcVar7 = "Forge ";
    }
    FUN_14000c9f0(param_2,pcVar7,uVar8);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    iVar5 = (int)(DAT_141d6de20 - DAT_141d6de18 >> 3) + -1;
    lVar4 = (longlong)iVar5;
    if (-1 < iVar5) {
      do {
        if (*(short *)(*(longlong *)(DAT_141d6de18 + lVar4 * 8) + 0x28) == param_5) {
          lVar3 = *(longlong *)(DAT_141d6de18 + (longlong)iVar5 * 8);
          break;
        }
        iVar5 = iVar5 + -1;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    FUN_14000c9f0(param_2,&DAT_140e59864,1);
    if (lVar3 == 0) {
      FUN_14000c9f0(param_2,&DAT_140e8b4bc,4);
    }
    else {
      local_2b8 = 0xf;
      local_2c0 = 0;
      local_2d0 = 0;
      FUN_14000c8b0(&local_2d0,lVar3 + 0x60,0,0xffffffffffffffff);
      FUN_14014b430(&local_2d0);
      FUN_14000cb40(param_2,&local_2d0,0,0xffffffffffffffff);
      if (0xf < local_2b8) {
        FUN_140002020(CONCAT71(uStack_2cf,local_2d0),local_2b8 + 1,1);
      }
      local_2b8 = 0xf;
      local_2c0 = 0;
      local_2d0 = 0;
    }
    break;
  case 0xdb:
    FUN_14000c9f0(param_2,"Collect Clay",0xc);
    break;
  case 0xdc:
    FUN_14000c9f0(param_2,"Install Colony In Hive",0x16);
    break;
  case 0xdd:
    FUN_14000c9f0(param_2,"Collect Hive Products",0x15);
    break;
  case 0xde:
    pcVar7 = "Cause Trouble";
    goto LAB_14084b8e8;
  case 0xdf:
  case 0xf1:
    pcVar7 = "No Job";
    goto LAB_14084b8e8;
  case 0xe0:
    pcVar7 = "Report Crime";
    goto LAB_14084b8e8;
  case 0xe1:
    pcVar7 = "Execute Criminal";
    goto LAB_14084b8e8;
  case 0xe2:
    FUN_14000c1f0(param_2,"Train ");
    if (param_12 != 0) {
      lVar3 = FUN_14084d3f0(param_12,0xf);
      if (lVar3 != 0) {
        FUN_14000c2b0(local_70);
        FUN_140c303c0(lVar3,local_70,0);
        FUN_140050380(param_2,local_70);
        FUN_14000c260(local_70);
      }
      break;
    }
    pcVar7 = "Animal";
    goto LAB_14084b8e8;
  case 0xe3:
    pcVar7 = "Carve Track";
    goto LAB_14084b8e8;
  case 0xe4:
    pcVar7 = "Push Track Vehicle";
    goto LAB_14084b8e8;
  case 0xe5:
    pcVar7 = "Place Track Vehicle";
    goto LAB_14084b8e8;
  case 0xe6:
    pcVar7 = "Store Item in Vehicle";
    goto LAB_14084b8e8;
  case 0xe7:
    FUN_14000c9f0(param_2,"Geld ",5);
    if ((param_12 != 0) && (lVar3 = FUN_14084d3f0(param_12,0x3b), lVar3 != 0)) {
      local_158 = 0xf;
      local_160 = 0;
      local_170 = 0;
      FUN_140c303c0(lVar3,&local_170,0);
      FUN_14000cb40(param_2,&local_170,0,0xffffffffffffffff);
      if (0xf < local_158) {
        FUN_140002020(CONCAT71(uStack_16f,local_170),local_158 + 1,1);
      }
      local_158 = 0xf;
      local_160 = 0;
      local_170 = 0;
      break;
    }
LAB_140847b2d:
    FUN_14000c9f0(param_2,"Animal",6);
    break;
  case 0xe8:
    FUN_14000c9f0(param_2,"Make ",5);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Figurine",9);
    break;
  case 0xe9:
    FUN_14000c9f0(param_2,"Make ",5);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Amulet",7);
    break;
  case 0xea:
    FUN_14000c9f0(param_2,"Make ",5);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Scepter",8);
    break;
  case 0xeb:
    FUN_14000c9f0(param_2,"Make ",5);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Crown",6);
    break;
  case 0xec:
    FUN_14000c9f0(param_2,"Make ",5);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Ring",5);
    break;
  case 0xed:
    FUN_14000c9f0(param_2,"Make ",5);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Earring",8);
    break;
  case 0xee:
    FUN_14000c9f0(param_2,"Make ",5);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2," Bracelet",9);
    break;
  case 0xef:
    FUN_14000c9f0(param_2,"Make Large ",0xb);
    local_308 = 0;
    local_310 = 1;
    local_318 = param_11;
    FUN_140da8550(&DAT_141c53470,local_2f0,param_6,param_7);
    FUN_14000cb40(param_2,local_2f0,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2,&DAT_140f2ee7c,4);
    break;
  case 0xf0:
    FUN_14000c9f0(param_2,"Put Item on Display",0x13);
    break;
  case 0xf2:
    FUN_14000c9f0(param_2,"Interrogate ",0xc);
    if ((param_12 == 0) || (lVar3 = FUN_14084d3f0(param_12,0x45), lVar3 == 0)) {
      FUN_14000c9f0(param_2,"Subject",7);
    }
    else {
      local_238 = 0xf;
      local_240 = 0;
      local_250 = 0;
      FUN_140c303c0(lVar3,&local_250,0);
      FUN_14000cb40(param_2,&local_250,0,0xffffffffffffffff);
      if (0xf < local_238) {
        FUN_140002020(CONCAT71(uStack_24f,local_250),local_238 + 1,1);
      }
      local_238 = 0xf;
      local_240 = 0;
      local_250 = 0;
    }
    break;
  case 0xf3:
    pcVar7 = "No Activity";
LAB_14084b8e8:
    FUN_14000c1f0(param_2,pcVar7);
  }
  FUN_14000c260(local_2f0);
  return;
}

