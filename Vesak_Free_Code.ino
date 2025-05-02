
int Maximum_Pins_In_Output = 8;
int Pattern_Loop_Number = 3;
int Output_pin[] = { 10, 11, 12, 13, 14, 15, 16, 17 };  //  Pin Number
int Time = 200;                                      // millisecond 1000 = 1S 400


bool Output_Type = true; // 


void setup() {
  for (int Loop_01 = 0; Loop_01 < Maximum_Pins_In_Output; Loop_01++) {
    pinMode(Output_pin[Loop_01], OUTPUT);
  }
  Set_All(!Output_Type);
}

void loop() {

  // 01 Blinking Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Blinking(Output_Type);
  }

  // 02 Run Forward Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Run_Forward(Output_Type);
  }

  // 03 Run Forward Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Run_Reverse(Output_Type);
  }

  // 04 Night Rider Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Night_Rider(Output_Type);
  }

  // 05 Night Rider Duble Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number * 5; Loop_01++) {
    Night_Rider_Duble(Output_Type);
  }

  // 06 Alternating Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Alternating(Output_Type);
  }

  // 07 Vip Blinking Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Vip_Blinking(Output_Type);
  }

  // 08 Filled Forward Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Filled_Forward(Output_Type);
  }

  // 09 Filled Reverse Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Filled_Reverse(Output_Type);
  }

  // 10 Unfilled Forward Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Unfilled_Forward(Output_Type);
  }

  // 11 Unfilled Reverse Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Unfilled_Reverse(Output_Type);
  }

  // 12 filled Forward + Unfilled Forward Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Filled_Forward(Output_Type);
    Unfilled_Forward(Output_Type);
  }

  // 13 filled Reverse + Unfilled Reverse Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Filled_Reverse(Output_Type);
    Unfilled_Reverse(Output_Type);
  }

  // 14 Inside to Outside Filled Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Set_All(!Output_Type);
    delay(Time);
    Inside2out(Output_Type);
  }

  // 15 Outside to Inside Filled Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Set_All(!Output_Type);
    delay(Time);
    Outside2In(Output_Type);
  }

  // 16 Inside to Outside Unfilled Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Set_All(Output_Type);
    delay(Time);
    Inside2out(!Output_Type);
  }

  // 17 Outside to Inside Unfilled Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Set_All(Output_Type);
    delay(Time);
    Outside2In(!Output_Type);
  }

  // 18 Inside to Outside Filled + Unfilled Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Set_All(!Output_Type);
    delay(Time);
    Inside2out(Output_Type);
    Set_All(Output_Type);
    delay(Time);
    Inside2out(!Output_Type);
  }

  // 19 Inside to Outside Filled + Unfilled Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Set_All(!Output_Type);
    delay(Time);
    Outside2In(Output_Type);
    Set_All(Output_Type);
    delay(Time);
    Outside2In(!Output_Type);
  }

  // 20 Run Forward Pattern Dark
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Run_Forward(!Output_Type);
  }

  // 21 Run Forward Pattern Dark
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Run_Reverse(!Output_Type);
  }

  // 22 Night Rider Pattern Dark
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Night_Rider(!Output_Type);
  }

  // 23 Night Rider Duble Pattern Dark
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number * 5; Loop_01++) {
    Night_Rider_Duble(!Output_Type);
  }

  // 24 Filled One By One Forward
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Set_All(!Output_Type);
    Filled_One_By_One_Forward(Output_Type);
  }

  // 25 Filled One By One Reverse
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Set_All(!Output_Type);
    Filled_One_By_One_Reverse(Output_Type);
  }

  // 26 Unfilled One By One Forward
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Set_All(Output_Type);
    Filled_One_By_One_Reverse(!Output_Type);
  }

  // 27 Unfilled One By One Reverse
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Set_All(Output_Type);
    Filled_One_By_One_Reverse(!Output_Type);
  }

  // 28 Filled One By One Forward + Unfilled One By One Reverse
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Filled_One_By_One_Forward(Output_Type);
    Filled_One_By_One_Reverse(!Output_Type);
  }

  // 29 Filled One By One Reverse + Unfilled One By One Forward
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Filled_One_By_One_Reverse(Output_Type);
    Filled_One_By_One_Forward(!Output_Type);
  }

  // 30 Filled One By One Forward + Unfilled One By One Forward
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Filled_One_By_One_Forward(Output_Type);
    Filled_One_By_One_Forward(!Output_Type);
  }

  // 31 Filled One By One Reverse + Unfilled One By One Reverse
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Filled_One_By_One_Reverse(Output_Type);
    Filled_One_By_One_Reverse(!Output_Type);
  }

  // 32 Tandom_01 Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Random_01(Output_Type);
  }

  // 33 Tandom_02 Pattern
  for (int Loop_01 = 0; Loop_01 < Pattern_Loop_Number; Loop_01++) {
    Tandom_02(Output_Type);
  }
}

void Night_Rider_Duble(int State) {

  int Middle_Point = Maximum_Pins_In_Output / 2;
  if (Maximum_Pins_In_Output % 2 == 0) {
    for (int Loop_02 = 0; Loop_02 < Middle_Point; Loop_02++) {
      digitalWrite(Output_pin[Loop_02], State);
      digitalWrite(Output_pin[Maximum_Pins_In_Output - Loop_02 - 1], State);
      delay(Time);
      digitalWrite(Output_pin[Loop_02], !State);
      digitalWrite(Output_pin[Maximum_Pins_In_Output - Loop_02 - 1], !State);
    }
    for (int Loop_02 = Middle_Point - 2; Loop_02 > 0; Loop_02--) {
      digitalWrite(Output_pin[Loop_02], State);
      digitalWrite(Output_pin[Maximum_Pins_In_Output - Loop_02 - 1], State);
      delay(Time);
      digitalWrite(Output_pin[Loop_02], !State);
      digitalWrite(Output_pin[Maximum_Pins_In_Output - Loop_02 - 1], !State);
    }
  } else {
    for (int Loop_02 = 0; Loop_02 <= Middle_Point; Loop_02++) {
      digitalWrite(Output_pin[Loop_02], State);
      digitalWrite(Output_pin[Maximum_Pins_In_Output - Loop_02 - 1], State);
      delay(Time);
      digitalWrite(Output_pin[Loop_02], !State);
      digitalWrite(Output_pin[Maximum_Pins_In_Output - Loop_02 - 1], !State);
    }
    for (int Loop_02 = Middle_Point - 1; Loop_02 > 0; Loop_02--) {
      digitalWrite(Output_pin[Loop_02], State);
      digitalWrite(Output_pin[Maximum_Pins_In_Output - Loop_02 - 1], State);
      delay(Time);
      digitalWrite(Output_pin[Loop_02], !State);
      digitalWrite(Output_pin[Maximum_Pins_In_Output - Loop_02 - 1], !State);
    }
  }
}

void Vip_Blinking(int State) {
  for (int Loop_03 = 0; Loop_03 < 4; Loop_03++) {
    int Middle_Point = Maximum_Pins_In_Output / 2;

    if (Maximum_Pins_In_Output % 2 == 0) {
      for (int Loop_02 = 0; Loop_02 < 4; Loop_02++) {
        for (int Loop_04 = Middle_Point; Loop_04 < Maximum_Pins_In_Output; Loop_04++) {
          digitalWrite(Output_pin[Loop_04], State);
        }
        delay(Time / 2);
        for (int Loop_04 = Middle_Point; Loop_04 < Maximum_Pins_In_Output; Loop_04++) {
          digitalWrite(Output_pin[Loop_04], !State);
        }
        delay(Time / 2);
      }
      for (int Loop_02 = 0; Loop_02 < 4; Loop_02++) {
        for (int Loop_04 = Middle_Point - 1; Loop_04 > -1; Loop_04--) {
          digitalWrite(Output_pin[Loop_04], State);
        }
        delay(Time / 2);
        for (int Loop_04 = Middle_Point - 1; Loop_04 > -1; Loop_04--) {
          digitalWrite(Output_pin[Loop_04], !State);
        }
        delay(Time / 2);
      }
    } else {
      for (int Loop_02 = 0; Loop_02 < 4; Loop_02++) {
        for (int Loop_04 = Middle_Point; Loop_04 < Maximum_Pins_In_Output; Loop_04++) {
          digitalWrite(Output_pin[Loop_04], State);
        }
        delay(Time / 2);
        for (int Loop_04 = Middle_Point; Loop_04 < Maximum_Pins_In_Output; Loop_04++) {
          digitalWrite(Output_pin[Loop_04], !State);
        }
        delay(Time / 2);
      }
      for (int Loop_02 = 0; Loop_02 < 4; Loop_02++) {
        for (int Loop_04 = Middle_Point; Loop_04 > -1; Loop_04--) {
          digitalWrite(Output_pin[Loop_04], State);
        }
        delay(Time / 2);
        for (int Loop_04 = Middle_Point; Loop_04 > -1; Loop_04--) {
          digitalWrite(Output_pin[Loop_04], !State);
        }
        delay(Time / 2);
      }
    }
  }
}

void Filled_One_By_One_Reverse(int State) {
  for (int Loop_03 = Maximum_Pins_In_Output - 1; Loop_03 > -1; Loop_03--) {
    digitalWrite(Output_pin[Maximum_Pins_In_Output - 1], State);
    delay(Time);
    for (int Loop_02 = Maximum_Pins_In_Output - 1; Loop_02 > Maximum_Pins_In_Output - Loop_03 - 1; Loop_02--) {
      digitalWrite(Output_pin[Loop_02], !State);
      digitalWrite(Output_pin[Loop_02 - 1], State);
      delay(Time);
    }
  }
}

void Filled_One_By_One_Forward(int State) {
  for (int Loop_03 = 0; Loop_03 < Maximum_Pins_In_Output; Loop_03++) {
    digitalWrite(Output_pin[0], State);
    delay(Time);
    for (int Loop_02 = 0; Loop_02 < Maximum_Pins_In_Output - Loop_03 - 1; Loop_02++) {
      digitalWrite(Output_pin[Loop_02], !State);
      digitalWrite(Output_pin[Loop_02 + 1], State);
      delay(Time);
    }
  }
}

void Outside2In(int State) {
  int Middle_Point;
  if (Maximum_Pins_In_Output % 2 == 0) {
    Middle_Point = Maximum_Pins_In_Output / 2;
    for (int Loop_02 = Middle_Point - 1; Loop_02 > 0; Loop_02--) {
      if (Middle_Point - (Loop_02 + 1) >= 0) digitalWrite(Output_pin[Middle_Point - (Loop_02 + 1)], State);
      if (Middle_Point + Loop_02 < Maximum_Pins_In_Output) digitalWrite(Output_pin[Middle_Point + Loop_02], State);
      delay(Time);
    }
    digitalWrite(Output_pin[Middle_Point], State);
    digitalWrite(Output_pin[Middle_Point - 1], State);
    delay(Time);
  } else {
    Middle_Point = Maximum_Pins_In_Output / 2;
    for (int Loop_02 = Middle_Point; Loop_02 > 0; Loop_02--) {
      if (Middle_Point - Loop_02 >= 0) digitalWrite(Output_pin[Middle_Point - Loop_02], State);
      if (Middle_Point + Loop_02 < Maximum_Pins_In_Output) digitalWrite(Output_pin[Middle_Point + Loop_02], State);
      delay(Time);
    }
    digitalWrite(Output_pin[Middle_Point], State);
    delay(Time);
  }
}

void Inside2out(int State) {
  int Middle_Point;
  delay(Time);
  if (Maximum_Pins_In_Output % 2 == 0) {
    Middle_Point = Maximum_Pins_In_Output / 2;
    digitalWrite(Output_pin[Middle_Point], State);
    digitalWrite(Output_pin[Middle_Point - 1], State);
    delay(Time);
    for (int Loop_02 = 1; Loop_02 < Middle_Point; Loop_02++) {
      if (Middle_Point - (Loop_02 + 1) >= 0) digitalWrite(Output_pin[Middle_Point - (Loop_02 + 1)], State);
      if (Middle_Point + Loop_02 < Maximum_Pins_In_Output) digitalWrite(Output_pin[Middle_Point + Loop_02], State);
      delay(Time);
    }
  } else {
    Middle_Point = Maximum_Pins_In_Output / 2;
    digitalWrite(Output_pin[Middle_Point], State);
    delay(Time);
    for (int Loop_02 = 1; Loop_02 <= Middle_Point; Loop_02++) {
      if (Middle_Point - Loop_02 >= 0) digitalWrite(Output_pin[Middle_Point - Loop_02], State);
      if (Middle_Point + Loop_02 < Maximum_Pins_In_Output) digitalWrite(Output_pin[Middle_Point + Loop_02], State);
      delay(Time);
    }
  }
}

void Tandom_02(int State) {
  for (int Loop_02 = 0; Loop_02 < 10; Loop_02++) {
    int Random_LED = random(Maximum_Pins_In_Output);
    digitalWrite(Output_pin[Random_LED], State);
    delay(Time);
    digitalWrite(Output_pin[Random_LED], !State);
  }
  Set_All(!State);
}

void Random_01(int State) {
  for (int Loop_03 = 0; Loop_03 < 7; Loop_03++) {
    for (int Loop_02 = 0; Loop_02 < Maximum_Pins_In_Output; Loop_02++) digitalWrite(Output_pin[Loop_02], random(2));
    delay(Time);
  }
  Set_All(!State);
}

void Unfilled_Reverse(int State) {
  Set_All(State);
  delay(Time);
  for (int Loop_02 = Maximum_Pins_In_Output - 1; Loop_02 > -1; Loop_02--) {
    digitalWrite(Output_pin[Loop_02], !State);
    delay(Time);
  }
}

void Unfilled_Forward(int State) {
  Set_All(State);
  delay(Time);
  for (int Loop_02 = 0; Loop_02 < Maximum_Pins_In_Output; Loop_02++) {
    digitalWrite(Output_pin[Loop_02], !State);
    delay(Time);
  }
}

void Filled_Reverse(int State) {
  Set_All(!State);
  for (int Loop_02 = Maximum_Pins_In_Output - 1; Loop_02 > -1; Loop_02--) {
    digitalWrite(Output_pin[Loop_02], State);
    delay(Time);
  }
}

void Filled_Forward(int State) {
  Set_All(!State);
  for (int Loop_02 = 0; Loop_02 < Maximum_Pins_In_Output; Loop_02++) {
    digitalWrite(Output_pin[Loop_02], State);
    delay(Time);
  }
}

void Alternating(int State) {
  for (int Loop_03 = 0; Loop_03 < 3; Loop_03++) {
    for (int Loop_02 = 0; Loop_02 < Maximum_Pins_In_Output; Loop_02++) digitalWrite(Output_pin[Loop_02], (Loop_02 % 2 == 0) ? State : !State);
    delay(Time);
    for (int Loop_02 = 0; Loop_02 < Maximum_Pins_In_Output; Loop_02++) digitalWrite(Output_pin[Loop_02], (Loop_02 % 2 != 0) ? State : !State);
    delay(Time);
  }
}

void Night_Rider(int State) {
  for (int Loop_02 = 0; Loop_02 < Maximum_Pins_In_Output; Loop_02++) {
    digitalWrite(Output_pin[Loop_02], State);
    delay(Time);
    digitalWrite(Output_pin[Loop_02], !State);
  }
  for (int Loop_02 = Maximum_Pins_In_Output - 2; Loop_02 > 0; Loop_02--) {
    digitalWrite(Output_pin[Loop_02], State);
    delay(Time);
    digitalWrite(Output_pin[Loop_02], !State);
  }
}

void Run_Reverse(int State) {
  for (int Loop_02 = Maximum_Pins_In_Output - 1; Loop_02 > -1; Loop_02--) {
    digitalWrite(Output_pin[Loop_02], State);
    delay(Time);
    digitalWrite(Output_pin[Loop_02], !State);
  }
}

void Run_Forward(int State) {
  for (int Loop_02 = 0; Loop_02 < Maximum_Pins_In_Output; Loop_02++) {
    digitalWrite(Output_pin[Loop_02], State);
    delay(Time);
    digitalWrite(Output_pin[Loop_02], !State);
  }
}

void Blinking(int State) {
  for (int Loop_03 = 0; Loop_03 < 3; Loop_03++) {
    Set_All(State);
    delay(Time / 2);
    Set_All(!State);
    delay(Time / 2);
  }
}
void Set_All(int State) {
  for (int Loop_02 = 0; Loop_02 < Maximum_Pins_In_Output; Loop_02++) digitalWrite(Output_pin[Loop_02], State);
}
