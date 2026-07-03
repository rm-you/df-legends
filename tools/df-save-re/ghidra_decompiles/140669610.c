// FUN_140669610 @ 140669610
// callees:
//   -> 14000c8b0 FUN_14000c8b0


void FUN_140669610(short param_1,undefined8 *param_2,char param_3,short param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  param_2[2] = 0;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar2 = 0;
  if (param_4 == -1) {
LAB_1406697b5:
    if (param_3 != '\0') {
      if (param_1 < 0) {
        return;
      }
      if ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)param_1) {
        return;
      }
      puVar2 = (undefined8 *)(*(longlong *)(DAT_141d6dd50 + (longlong)param_1 * 8) + 0x40);
      goto LAB_14066978a;
    }
  }
  else {
    if (param_3 != '\0') {
      if (((-1 < param_1) &&
          ((ulonglong)(longlong)param_1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
         (-1 < param_4)) {
        lVar1 = *(longlong *)(DAT_141d6dd50 + (longlong)param_1 * 8);
        if ((ulonglong)(longlong)param_4 <
            (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) {
          puVar2 = (undefined8 *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_4 * 8) + 0x40);
          if (param_2 != puVar2) {
            FUN_14000c8b0(param_2,puVar2,0,0xffffffffffffffff);
          }
          if (param_2[2] != 0) {
            return;
          }
        }
      }
      goto LAB_1406697b5;
    }
    if (param_1 < 0) {
      return;
    }
    if (((ulonglong)(longlong)param_1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
       (-1 < param_4)) {
      lVar1 = *(longlong *)(DAT_141d6dd50 + (longlong)param_1 * 8);
      if ((ulonglong)(longlong)param_4 <
          (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) {
        puVar2 = (undefined8 *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_4 * 8) + 0x20);
        if (param_2 != puVar2) {
          FUN_14000c8b0(param_2,puVar2,0,0xffffffffffffffff);
        }
        if (param_2[2] != 0) {
          return;
        }
      }
    }
  }
  if (param_1 < 0) {
    return;
  }
  if ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)param_1) {
    return;
  }
  puVar2 = (undefined8 *)(*(longlong *)(DAT_141d6dd50 + (longlong)param_1 * 8) + 0x20);
LAB_14066978a:
  if (param_2 != puVar2) {
    FUN_14000c8b0(param_2,puVar2,0,0xffffffffffffffff);
  }
  return;
}

