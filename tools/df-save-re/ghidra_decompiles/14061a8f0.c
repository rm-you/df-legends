// FUN_14061a8f0 @ 14061a8f0
// callees:
//   -> 140d7ee60 FUN_140d7ee60
//   -> 140d2cb70 FUN_140d2cb70


undefined8
FUN_14061a8f0(ushort param_1,ushort param_2,ushort param_3,short param_4,short param_5,
             ushort param_6,undefined4 param_7)

{
  ushort uVar1;
  char cVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  short sVar7;
  ushort uVar8;
  ushort *puVar9;
  ushort uVar10;
  uint uVar11;
  ushort *puVar12;
  ushort local_res8 [4];
  ushort local_res10 [4];
  ushort local_res18 [4];
  ushort local_88 [2];
  ushort local_84 [2];
  ushort local_80 [2];
  ushort local_7c [2];
  ushort local_78 [2];
  ushort local_74;
  ushort local_72;
  ushort local_70;
  ushort local_6e;
  uint local_6c;
  ushort *local_68;
  ushort *local_60;
  ushort *local_58;
  ushort *local_50;
  ushort *local_48;
  
  local_res18[0] = param_3;
  local_res10[0] = param_2;
  local_res8[0] = param_1;
  uVar10 = param_4 - param_1;
  if (param_3 == param_6) {
    local_res18[0] = param_5 - param_2;
    local_84[0] = uVar10;
    if ((short)uVar10 < 0) {
      uVar10 = -uVar10;
      local_88[0] = 0xffff;
      local_84[0] = uVar10;
    }
    else {
      local_88[0] = 1;
    }
    if ((short)local_res18[0] < 0) {
      local_res18[0] = -local_res18[0];
      param_6 = 0xffff;
    }
    else {
      param_6 = 1;
    }
    if ((short)uVar10 < (short)local_res18[0]) {
      puVar12 = local_res8;
      puVar4 = local_84;
      puVar6 = local_88;
      puVar9 = local_res10;
      puVar3 = local_res18;
      puVar5 = &param_6;
    }
    else {
      puVar12 = local_res10;
      puVar4 = local_res18;
      puVar6 = &param_6;
      puVar9 = local_res8;
      puVar3 = local_84;
      puVar5 = local_88;
    }
    uVar1 = *puVar3;
    sVar7 = 0;
    DAT_1416b198c = 0;
    if (0 < (short)uVar1) {
      local_7c[0] = *puVar5;
      local_res18[0] = *puVar4;
      uVar8 = uVar1;
      local_84[0] = uVar10;
      do {
        sVar7 = sVar7 + local_res18[0];
        if ((int)(short)uVar1 < sVar7 * 2) {
          sVar7 = sVar7 - uVar1;
          *puVar12 = *puVar12 + *puVar6;
        }
        *puVar9 = *puVar9 + local_7c[0];
        uVar8 = uVar8 - 1;
        if ((short)local_res8[0] < 0) {
          return 1;
        }
        if ((short)local_res10[0] < 0) {
          return 1;
        }
        if (DAT_141d69554 <= (short)local_res8[0]) {
          return 1;
        }
        if (DAT_141d69558 <= (short)local_res10[0]) {
          return 1;
        }
        cVar2 = FUN_140d7ee60(&DAT_141c53470,local_res8[0],local_res10[0],param_3,param_7);
        if (cVar2 == '\0') {
          return 0;
        }
      } while (0 < (short)uVar8);
    }
  }
  else {
    local_88[0] = param_6 - param_3;
    local_80[0] = param_5 - param_2;
    param_6 = uVar10;
    if ((short)uVar10 < 0) {
      uVar10 = -uVar10;
      local_84[0] = 0xffff;
      param_6 = uVar10;
    }
    else {
      local_84[0] = 1;
    }
    if ((short)local_80[0] < 0) {
      local_80[0] = -local_80[0];
      local_7c[0] = 0xffff;
    }
    else {
      local_7c[0] = 1;
    }
    if ((short)local_88[0] < 0) {
      local_88[0] = -local_88[0];
      local_78[0] = 0xffff;
    }
    else {
      local_78[0] = 1;
    }
    local_60 = local_7c;
    local_68 = local_res8;
    local_58 = local_res10;
    local_48 = local_res18;
    local_50 = local_78;
    puVar6 = &param_6;
    puVar9 = local_84;
    puVar12 = local_80;
    puVar4 = local_88;
    if (((short)uVar10 < (short)local_88[0]) && ((short)local_80[0] < (short)local_88[0])) {
      local_48 = local_res8;
      local_68 = local_res18;
      puVar4 = &param_6;
      local_50 = local_84;
      puVar6 = local_88;
      puVar9 = local_78;
    }
    else if ((short)uVar10 < (short)local_80[0]) {
      local_58 = local_res8;
      local_68 = local_res10;
      puVar12 = &param_6;
      local_60 = local_84;
      puVar6 = local_80;
      puVar9 = local_7c;
    }
    local_72 = *puVar6;
    DAT_1416b198c = 0;
    local_80[0] = 0;
    param_6 = 0;
    if (0 < (short)local_72) {
      local_6e = *puVar4;
      uVar11 = (uint)(short)local_72;
      local_74 = *puVar12;
      local_88[0] = *puVar9;
      local_70 = local_72;
      local_6c = uVar11;
      while( true ) {
        local_80[0] = local_80[0] + local_74;
        if ((int)local_6c < (short)local_80[0] * 2) {
          local_80[0] = local_80[0] - (short)uVar11;
          *local_58 = *local_58 + *local_60;
        }
        param_6 = param_6 + local_6e;
        if ((int)local_6c < (short)param_6 * 2) {
          param_6 = param_6 - (short)uVar11;
          *local_48 = *local_48 + *local_50;
        }
        local_72 = local_72 - 1;
        *local_68 = *local_68 + local_88[0];
        uVar8 = local_res18[0];
        uVar1 = local_res10[0];
        uVar10 = local_res8[0];
        if ((((((short)local_res8[0] < 0) || ((short)local_res10[0] < 0)) ||
             ((short)local_res18[0] < 0)) ||
            ((DAT_141d69554 <= (short)local_res8[0] || (DAT_141d69558 <= (short)local_res10[0]))))
           || (DAT_141d6955c <= (short)local_res18[0])) break;
        cVar2 = FUN_140d7ee60(&DAT_141c53470,local_res8[0],local_res10[0],local_res18[0],param_7);
        if (cVar2 == '\0') {
          return 0;
        }
        if (uVar8 == param_3) goto LAB_14061ae0c;
        if ((param_1 == uVar10) && (param_2 == uVar1)) {
          if ((short)param_3 < (short)uVar8) {
            cVar2 = FUN_140d2cb70(&DAT_141c53470,uVar10,uVar1,uVar8,1,0,1,0,0);
          }
          else {
            cVar2 = FUN_140d2cb70(&DAT_141c53470,param_1,param_2,param_3,1,0,1,0,0);
          }
LAB_14061ae04:
          if (cVar2 == '\0') {
            return 0;
          }
        }
        else if ((short)param_3 < (short)uVar8) {
          cVar2 = FUN_140d2cb70(&DAT_141c53470,uVar10,uVar1,uVar8,1,0,1,0,0);
          if ((cVar2 == '\0') ||
             (cVar2 = FUN_140d7ee60(&DAT_141c53470,uVar10,uVar1,param_3,param_7), cVar2 == '\0')) {
            cVar2 = FUN_140d2cb70(&DAT_141c53470,param_1,param_2,uVar8,1,0,1,0,0);
            goto LAB_14061ae04;
          }
        }
        else {
          cVar2 = FUN_140d2cb70(&DAT_141c53470,uVar10,uVar1,param_3,1,0,1,0,0);
          if (cVar2 == '\0') {
            cVar2 = FUN_140d2cb70(&DAT_141c53470,param_1,param_2,param_3,1,0,1,0,0);
            if (cVar2 == '\0') {
              return 0;
            }
            cVar2 = FUN_140d7ee60(&DAT_141c53470,param_1,param_2,uVar8,param_7);
            goto LAB_14061ae04;
          }
        }
LAB_14061ae0c:
        if ((short)local_72 < 1) {
          return 1;
        }
        uVar11 = (uint)local_70;
        param_3 = uVar8;
        param_2 = uVar1;
        param_1 = uVar10;
      }
    }
  }
  return 1;
}

