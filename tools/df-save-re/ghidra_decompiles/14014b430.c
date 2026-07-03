// FUN_14014b430 @ 14014b430
// callees:


void FUN_14014b430(longlong *param_1)

{
  bool bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  uVar5 = uVar3;
  if (param_1[2] != 0) {
    do {
      bVar1 = false;
      iVar4 = (int)uVar5;
      if (0 < iVar4) {
        uVar5 = param_1[3];
        plVar2 = param_1;
        if (0xf < uVar5) {
          plVar2 = (longlong *)*param_1;
        }
        if (*(char *)((uVar3 - 1) + (longlong)plVar2) == ' ') {
LAB_14014b48c:
          bVar1 = true;
        }
        else {
          plVar2 = param_1;
          if (0xf < uVar5) {
            plVar2 = (longlong *)*param_1;
          }
          bVar1 = false;
          if (*(char *)((uVar3 - 1) + (longlong)plVar2) == '\"') goto LAB_14014b48c;
        }
        plVar2 = param_1;
        if (0xf < uVar5) {
          plVar2 = (longlong *)*param_1;
        }
        if ((*(char *)((uVar3 - 1) + (longlong)plVar2) == '\'') && (1 < iVar4)) {
          plVar2 = param_1;
          if (0xf < uVar5) {
            plVar2 = (longlong *)*param_1;
          }
          if (*(char *)((longlong)plVar2 + (uVar3 - 2)) != ' ') {
            plVar2 = param_1;
            if (0xf < uVar5) {
              plVar2 = (longlong *)*param_1;
            }
            if (*(char *)((longlong)plVar2 + (uVar3 - 2)) != ',') goto LAB_14014b4dd;
          }
          bVar1 = true;
        }
      }
LAB_14014b4dd:
      if ((iVar4 == 0) || (bVar1)) {
        uVar5 = param_1[3];
        plVar2 = param_1;
        if (0xf < uVar5) {
          plVar2 = (longlong *)*param_1;
        }
        if ('`' < *(char *)((longlong)plVar2 + uVar3)) {
          plVar2 = param_1;
          if (0xf < uVar5) {
            plVar2 = (longlong *)*param_1;
          }
          if (*(char *)((longlong)plVar2 + uVar3) < '{') {
            plVar2 = param_1;
            if (0xf < uVar5) {
              plVar2 = (longlong *)*param_1;
            }
            *(char *)((longlong)plVar2 + uVar3) = *(char *)((longlong)plVar2 + uVar3) + -0x61;
            plVar2 = param_1;
            if (0xf < (ulonglong)param_1[3]) {
              plVar2 = (longlong *)*param_1;
            }
            *(char *)((longlong)plVar2 + uVar3) = *(char *)((longlong)plVar2 + uVar3) + 'A';
          }
        }
        uVar5 = param_1[3];
        plVar2 = param_1;
        if (0xf < uVar5) {
          plVar2 = (longlong *)*param_1;
        }
        switch(*(undefined1 *)((longlong)plVar2 + uVar3)) {
        case 0x81:
          if (uVar5 < 0x10) {
            *(undefined1 *)((longlong)param_1 + uVar3) = 0x9a;
          }
          else {
            *(undefined1 *)(*param_1 + uVar3) = 0x9a;
          }
          break;
        case 0x82:
          if (uVar5 < 0x10) {
            *(undefined1 *)((longlong)param_1 + uVar3) = 0x90;
          }
          else {
            *(undefined1 *)(*param_1 + uVar3) = 0x90;
          }
          break;
        case 0x84:
          if (uVar5 < 0x10) {
            *(undefined1 *)((longlong)param_1 + uVar3) = 0x8e;
          }
          else {
            *(undefined1 *)(*param_1 + uVar3) = 0x8e;
          }
          break;
        case 0x86:
          if (uVar5 < 0x10) {
            *(undefined1 *)((longlong)param_1 + uVar3) = 0x8f;
          }
          else {
            *(undefined1 *)(*param_1 + uVar3) = 0x8f;
          }
          break;
        case 0x87:
          if (uVar5 < 0x10) {
            *(undefined1 *)((longlong)param_1 + uVar3) = 0x80;
          }
          else {
            *(undefined1 *)(*param_1 + uVar3) = 0x80;
          }
          break;
        case 0x91:
          plVar2 = param_1;
          if (0xf < uVar5) {
            plVar2 = (longlong *)*param_1;
          }
          *(undefined1 *)((longlong)plVar2 + uVar3) = 0x92;
          break;
        case 0x94:
          if (uVar5 < 0x10) {
            *(undefined1 *)((longlong)param_1 + uVar3) = 0x99;
          }
          else {
            *(undefined1 *)(*param_1 + uVar3) = 0x99;
          }
          break;
        case 0xa4:
          if (uVar5 < 0x10) {
            *(undefined1 *)((longlong)param_1 + uVar3) = 0xa5;
          }
          else {
            *(undefined1 *)(*param_1 + uVar3) = 0xa5;
          }
        }
      }
      uVar3 = uVar3 + 1;
      uVar5 = (ulonglong)(iVar4 + 1U);
    } while ((ulonglong)(longlong)(int)(iVar4 + 1U) < (ulonglong)param_1[2]);
  }
  return;
}

