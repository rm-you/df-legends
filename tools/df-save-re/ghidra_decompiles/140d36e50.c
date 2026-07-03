// FUN_140d36e50 @ 140d36e50
// callees:
//   -> 140d211e0 FUN_140d211e0
//   -> 1405c7730 FUN_1405c7730
//   -> 1405cbed0 FUN_1405cbed0
//   -> 1405c9340 FUN_1405c9340
//   -> 1405c9e20 FUN_1405c9e20
//   -> 1405cbc10 FUN_1405cbc10
//   -> 1405cc090 FUN_1405cc090
//   -> 1405cd6c0 FUN_1405cd6c0
//   -> 1405cbfb0 FUN_1405cbfb0
//   -> 1405c84a0 FUN_1405c84a0
//   -> 140289880 FUN_140289880
//   -> 140051e20 FUN_140051e20
//   -> 1405d2860 FUN_1405d2860
//   -> 1405c8290 FUN_1405c8290
//   -> 140c1dda0 FUN_140c1dda0
//   -> 1405cc2e0 FUN_1405cc2e0
//   -> 1405cc3c0 FUN_1405cc3c0
//   -> 140283a30 FUN_140283a30
//   -> 140dfb5b4 free


void FUN_140d36e50(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  void *_Memory;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  FUN_140d211e0(param_1,0);
  FUN_1405c7730(param_1 + 0x11a758);
  FUN_1405cbed0(param_1 + 0x11a848);
  FUN_1405c9340(param_1 + 0x11a770);
  FUN_1405c9e20(param_1 + 0x11a7a0);
  FUN_1405cbc10(param_1 + 0x11a878);
  FUN_1405cc090(param_1 + 0x11a860);
  lVar1 = *(longlong *)(param_1 + 0x11a948);
  lVar3 = *(longlong *)(param_1 + 0x11a950) - lVar1;
  while (lVar3 >> 3 != 0) {
    plVar2 = *(longlong **)(lVar1 + -8 + (lVar3 >> 3) * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,1);
    }
    lVar1 = *(longlong *)(param_1 + 0x11a948);
    lVar3 = *(longlong *)(param_1 + 0x11a950) - lVar1;
  }
  FUN_1405cd6c0(param_1 + 0x124500);
  FUN_1405cbfb0(param_1 + 0x11a8a8);
  FUN_1405c84a0(param_1 + 0x124440);
  FUN_140289880(param_1 + 0x11a8c0);
  FUN_140051e20(param_1 + 0x11a930);
  FUN_1405d2860(param_1 + 0x11ad20);
  FUN_1405c8290(param_1 + 0x11ad38);
  FUN_140c1dda0();
  FUN_1405cc2e0(param_1 + 0x1244d0);
  FUN_1405cc3c0(param_1 + 0x124550);
  uVar5 = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x1244e8);
  uVar6 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x1244f0) + (7 - (longlong)puVar4)) >> 3;
  if (*(undefined8 **)(param_1 + 0x1244f0) < puVar4) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      _Memory = (void *)*puVar4;
      if (_Memory != (void *)0x0) {
        FUN_140283a30(_Memory);
        free(_Memory);
      }
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  *(undefined8 *)(param_1 + 0x1244f0) = *(undefined8 *)(param_1 + 0x1244e8);
  return;
}

