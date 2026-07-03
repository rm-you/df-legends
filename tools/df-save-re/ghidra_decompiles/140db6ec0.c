// FUN_140db6ec0 @ 140db6ec0
// callees:
//   -> 140da82d0 FUN_140da82d0
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140002020 FUN_140002020
//   -> 140050540 FUN_140050540
//   -> 140da8550 FUN_140da8550
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_140db6ec0(undefined8 param_1,undefined8 *param_2,short param_3,int param_4,int param_5,
             int param_6,int param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined1 local_80;
  undefined2 local_78;
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_a8;
  param_2[2] = 0;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar2 = 0;
  if (((param_5 == -1) || (param_5 < 0)) ||
     ((ulonglong)(DAT_141d778d0 - DAT_141d778c8 >> 3) <= (ulonglong)(longlong)param_5)) {
    return 0;
  }
  lVar3 = *(longlong *)(DAT_141d778c8 + (longlong)param_5 * 8);
  uVar1 = *(uint *)(lVar3 + 0xa8);
  if (0 < param_6) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 4) == 0) {
        if ((uVar1 & 2) == 0) {
          return 1;
        }
        if (*(longlong *)(lVar3 + 0x98) - *(longlong *)(lVar3 + 0x90) >> 3 != 0) {
          FUN_14000cb40(param_2,**(undefined8 **)(lVar3 + 0x90),0,0xffffffffffffffff);
          FUN_14000c9f0(param_2,&DAT_140e59864);
        }
        if (param_3 == 3) {
          FUN_14000c9f0(param_2,"green glass ",0xc);
        }
        else if (param_3 == 4) {
          FUN_14000c9f0(param_2,"clear glass ",0xc);
        }
        else {
          if (param_3 != 5) {
            if (param_3 == -1) {
              if (param_7 == 0) goto LAB_140db7517;
            }
            else if (param_3 == 0) {
              local_48 = 0xf;
              local_50 = 0;
              local_60 = 0;
              if (param_6 == 1) {
                local_88 = (uint)local_88._1_3_ << 8;
              }
              else {
                local_88 = CONCAT31(local_88._1_3_,1);
              }
              FUN_140da82d0(&DAT_141c53470,&local_60,0,param_4);
              FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
              goto LAB_140db7613;
            }
            local_48 = 0xf;
            local_50 = 0;
            local_60 = 0;
            local_78 = 0;
            local_80 = 1;
            local_88 = param_7;
            FUN_140da8550(&DAT_141c53470,&local_60,param_3,param_4);
            FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
            FUN_14000c9f0(param_2,&DAT_140ee6b84,4);
            if (param_6 != 1) {
              FUN_140050540(param_2,1,0x73);
            }
            goto LAB_140db7613;
          }
          FUN_14000c9f0(param_2,"crystal glass ",0xe);
        }
LAB_140db7517:
        FUN_14000c9f0(param_2,&DAT_140ee6b80,3);
        if (param_6 == 1) {
          return 1;
        }
        FUN_140050540(param_2,1,0x73);
        return 1;
      }
      if (*(longlong *)(lVar3 + 0x98) - *(longlong *)(lVar3 + 0x90) >> 3 != 0) {
        FUN_14000cb40(param_2,**(undefined8 **)(lVar3 + 0x90),0,0xffffffffffffffff);
        FUN_14000c9f0(param_2,&DAT_140e59864,1);
      }
      if (param_3 == 3) {
        FUN_14000c9f0(param_2,"green glass ",0xc);
      }
      else if (param_3 == 4) {
        FUN_14000c9f0(param_2,"clear glass ",0xc);
      }
      else if (param_3 == 5) {
        FUN_14000c9f0(param_2,"crystal glass ",0xe);
      }
      else if ((param_3 != -1) && (param_4 != -1)) {
        local_48 = 0xf;
        local_50 = 0;
        local_60 = 0;
        local_88 = local_88 & 0xffffff00;
        FUN_140da82d0(&DAT_141c53470,&local_60,param_3,param_4);
        FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
        FUN_14000c9f0(param_2,&DAT_140e59864,1);
        goto LAB_140db7300;
      }
    }
    else if (param_3 == 3) {
      FUN_14000c9f0(param_2,"green glass ",0xc);
    }
    else if (param_3 == 4) {
      FUN_14000c9f0(param_2,"clear glass ",0xc);
    }
    else if (param_3 == 5) {
      FUN_14000c9f0(param_2,"crystal glass ",0xe);
    }
    else if ((param_3 != -1) && (param_4 != -1)) {
      local_48 = 0xf;
      local_50 = 0;
      local_60 = 0;
      local_88 = (uint)local_88._1_3_ << 8;
      FUN_140da82d0(&DAT_141c53470,&local_60,param_3);
      FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
      FUN_14000c9f0(param_2,&DAT_140e59864,1);
LAB_140db7300:
      if (0xf < local_48) {
        FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
      }
    }
    if (param_6 != 1) {
      FUN_14000cb40(param_2,lVar3 + 0x70,0,0xffffffffffffffff);
      return 1;
    }
    lVar3 = lVar3 + 0x50;
    goto LAB_140db711b;
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) == 0) {
        return 1;
      }
      if (*(longlong *)(lVar3 + 0x98) - *(longlong *)(lVar3 + 0x90) >> 3 != 0) {
        FUN_14000cb40(param_2,**(undefined8 **)(lVar3 + 0x90),0,0xffffffffffffffff);
        FUN_14000c9f0(param_2,&DAT_140e59864,1);
      }
      if (param_3 == 3) {
        FUN_14000c9f0(param_2,"green glass gems",0x10);
        return 1;
      }
      if (param_3 == 4) {
        FUN_14000c9f0(param_2,"clear glass gems",0x10);
        return 1;
      }
      if (param_3 == 5) {
        FUN_14000c9f0(param_2,"crystal glass gems",0x12);
        return 1;
      }
      if ((param_3 == -1) || (param_4 == -1)) {
        FUN_14000c9f0(param_2,&DAT_140ee6208,4);
        return 1;
      }
      local_48 = 0xf;
      local_50 = 0;
      local_60 = 0;
      local_88 = CONCAT31(local_88._1_3_,1);
      FUN_140da82d0(&DAT_141c53470,&local_60,param_3,param_4);
      FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
LAB_140db7613:
      if (local_48 < 0x10) {
        return 1;
      }
      FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
      return 1;
    }
    if (*(longlong *)(lVar3 + 0x98) - *(longlong *)(lVar3 + 0x90) >> 3 != 0) {
      FUN_14000cb40(param_2,**(undefined8 **)(lVar3 + 0x90),0,0xffffffffffffffff);
      FUN_14000c9f0(param_2,&DAT_140e59864,1);
    }
    if (param_3 == 3) goto LAB_140db7039;
    if (param_3 == 4) goto LAB_140db7059;
    if (param_3 == 5) goto LAB_140db7079;
    if ((param_3 != -1) && (param_4 != -1)) {
      local_48 = 0xf;
      local_50 = 0;
      local_60 = 0;
      local_88 = local_88 & 0xffffff00;
      FUN_140da82d0(&DAT_141c53470,&local_60,param_3,param_4);
      FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
      FUN_14000c9f0(param_2,&DAT_140e59864,1);
      goto LAB_140db70f1;
    }
  }
  else if (param_3 == 3) {
LAB_140db7039:
    FUN_14000c9f0(param_2,"green glass ",0xc);
  }
  else if (param_3 == 4) {
LAB_140db7059:
    FUN_14000c9f0(param_2,"clear glass ",0xc);
  }
  else if (param_3 == 5) {
LAB_140db7079:
    FUN_14000c9f0(param_2,"crystal glass ",0xe);
  }
  else if ((param_3 != -1) && (param_4 != -1)) {
    local_48 = 0xf;
    local_50 = 0;
    local_60 = 0;
    local_88 = (uint)local_88._1_3_ << 8;
    FUN_140da82d0(&DAT_141c53470,&local_60,param_3);
    FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
    FUN_14000c9f0(param_2,&DAT_140e59864,1);
LAB_140db70f1:
    if (0xf < local_48) {
      FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
    }
  }
  lVar3 = lVar3 + 0x70;
LAB_140db711b:
  FUN_14000cb40(param_2,lVar3,0,0xffffffffffffffff);
  return 1;
}

