// FUN_140ceef90 @ 140ceef90
// callees:
//   -> 140050410 FUN_140050410


void FUN_140ceef90(short *param_1)

{
  short sVar1;
  short **ppsVar2;
  short **ppsVar3;
  short sVar4;
  ulonglong *puVar5;
  longlong lVar6;
  short *local_res8;
  
  sVar4 = (param_1[3] / 0x30) * 0x30;
  sVar1 = (param_1[2] / 0x30) * 0x30;
  local_res8 = param_1;
  if (((((-1 < sVar1) && (sVar1 < DAT_141d69554)) && (-1 < sVar4)) &&
      ((sVar4 < DAT_141d69558 && (DAT_141d69540 != 0)))) &&
     (lVar6 = *(longlong *)
               (*(longlong *)(DAT_141d69540 + ((longlong)sVar1 >> 4) * 8) +
               ((longlong)sVar4 >> 4) * 8), lVar6 != 0)) {
    puVar5 = (ulonglong *)(lVar6 + 0x1a68);
    ppsVar2 = *(short ***)(lVar6 + 0x1a70);
    if ((&local_res8 < ppsVar2) && (ppsVar3 = (short **)*puVar5, ppsVar3 <= &local_res8)) {
      if (ppsVar2 == *(short ***)(lVar6 + 0x1a78)) {
        FUN_140050410(puVar5);
      }
      if (*(undefined8 **)(lVar6 + 0x1a70) != (undefined8 *)0x0) {
        **(undefined8 **)(lVar6 + 0x1a70) =
             *(undefined8 *)(*puVar5 + ((longlong)&local_res8 - (longlong)ppsVar3 >> 3) * 8);
      }
    }
    else {
      if (ppsVar2 == *(short ***)(lVar6 + 0x1a78)) {
        FUN_140050410(puVar5);
      }
      if (*(undefined8 **)(lVar6 + 0x1a70) != (undefined8 *)0x0) {
        **(undefined8 **)(lVar6 + 0x1a70) = param_1;
      }
    }
    *(longlong *)(lVar6 + 0x1a70) = *(longlong *)(lVar6 + 0x1a70) + 8;
  }
  sVar1 = *param_1;
  if (sVar1 == 0) {
    if ((&local_res8 < DAT_141c70890) && (DAT_141c70888 <= &local_res8)) {
      lVar6 = (longlong)&local_res8 - (longlong)DAT_141c70888;
      if (DAT_141c70890 == DAT_141c70898) {
        local_res8 = param_1;
        FUN_140050410(&DAT_141c70888);
      }
      if (DAT_141c70890 != (short **)0x0) {
        *DAT_141c70890 = DAT_141c70888[lVar6 >> 3];
      }
    }
    else {
      if (DAT_141c70890 == DAT_141c70898) {
        local_res8 = param_1;
        FUN_140050410(&DAT_141c70888);
      }
      if (DAT_141c70890 != (short **)0x0) {
        *DAT_141c70890 = param_1;
      }
    }
    DAT_141c70890 = DAT_141c70890 + 1;
  }
  else {
    if (sVar1 == 1) {
      if ((&local_res8 < DAT_141c708a8) && (DAT_141c708a0 <= &local_res8)) {
        lVar6 = (longlong)&local_res8 - (longlong)DAT_141c708a0;
        if (DAT_141c708a8 == DAT_141c708b0) {
          local_res8 = param_1;
          FUN_140050410(&DAT_141c708a0);
        }
        if (DAT_141c708a8 != (short **)0x0) {
          *DAT_141c708a8 = DAT_141c708a0[lVar6 >> 3];
        }
      }
      else {
        if (DAT_141c708a8 == DAT_141c708b0) {
          local_res8 = param_1;
          FUN_140050410(&DAT_141c708a0);
        }
        if (DAT_141c708a8 != (short **)0x0) {
          *DAT_141c708a8 = param_1;
        }
      }
      DAT_141c708a8 = DAT_141c708a8 + 1;
      return;
    }
    if (sVar1 == 2) {
      if ((&local_res8 < DAT_141c70860) && (DAT_141c70858 <= &local_res8)) {
        lVar6 = (longlong)&local_res8 - (longlong)DAT_141c70858;
        if (DAT_141c70860 == DAT_141c70868) {
          local_res8 = param_1;
          FUN_140050410(&DAT_141c70858);
        }
        if (DAT_141c70860 != (short **)0x0) {
          *DAT_141c70860 = DAT_141c70858[lVar6 >> 3];
        }
      }
      else {
        if (DAT_141c70860 == DAT_141c70868) {
          local_res8 = param_1;
          FUN_140050410(&DAT_141c70858);
        }
        if (DAT_141c70860 != (short **)0x0) {
          *DAT_141c70860 = param_1;
        }
      }
      DAT_141c70860 = DAT_141c70860 + 1;
      return;
    }
    if (sVar1 == 3) {
      if ((&local_res8 < DAT_141c70878) && (DAT_141c70870 <= &local_res8)) {
        lVar6 = (longlong)&local_res8 - (longlong)DAT_141c70870;
        if (DAT_141c70878 == DAT_141c70880) {
          local_res8 = param_1;
          FUN_140050410(&DAT_141c70870);
        }
        if (DAT_141c70878 != (short **)0x0) {
          *DAT_141c70878 = DAT_141c70870[lVar6 >> 3];
        }
      }
      else {
        if (DAT_141c70878 == DAT_141c70880) {
          local_res8 = param_1;
          FUN_140050410(&DAT_141c70870);
        }
        if (DAT_141c70878 != (short **)0x0) {
          *DAT_141c70878 = param_1;
        }
      }
      DAT_141c70878 = DAT_141c70878 + 1;
      return;
    }
  }
  return;
}

