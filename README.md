# Arduino LED Blinking - QA Documentation Project

## 1. Project Overview

This project demonstrates a basic embedded system using an Arduino to
control an LED. The project is developed and documented using GitHub
collaborative tools for quality assurance, issue tracking, problem solving,
and project monitoring.

The project demonstrates how GitHub can be used to identify problems,
perform root-cause analysis, implement solutions, and maintain traceability
between issues, branches, commits, and pull requests.

---

## 2. Objective

The objectives of this project are to:

- Implement a basic Arduino LED blinking system.
- Maintain embedded-system source code using GitHub.
- Document project requirements and hardware connections.
- Identify and track QA issues.
- Perform root-cause analysis.
- Implement corrective solutions.
- Use branches and commits for controlled development.
- Use Pull Requests for reviewing and merging changes.
- Maintain a traceable history of problem resolution.

---

## 3. Hardware Requirements

- Arduino board
- LED
- 220Ω current-limiting resistor
- Connecting wires
- Breadboard
- USB cable

### LED Connection

The LED is connected to Arduino digital pin 13 through a
220Ω current-limiting resistor.

**Connection:**

Arduino Pin 13 → 220Ω Resistor → LED Anode (+)

LED Cathode (-) → Arduino GND

### Hardware Verification

Before testing the program:

1. Verify the LED polarity.
2. The longer LED leg (anode) should connect toward the Arduino output
   through the resistor.
3. The shorter LED leg (cathode) should connect to GND.
4. Ensure that the resistor is connected in series with the LED.
5. Verify that all jumper-wire connections are secure.

---

## 4. LED Pin Configuration

The LED output is controlled through Arduino digital pin 13.

The source code uses the following configuration:

~~~cpp
const int LED_PIN = 13;
~~~

The documented pin number must match the `LED_PIN` value in
`led_blink.ino`.

---

## 5. Software Requirements

- Arduino IDE
- GitHub

---

## 6. Working Principle

The Arduino configures the LED pin as an output and periodically changes
the LED state.

The current implementation uses a non-blocking `millis()`-based timing
method.

The basic sequence is:

1. Configure LED pin as OUTPUT.
2. Continuously execute the Arduino loop.
3. Check the elapsed time using `millis()`.
4. After 500 ms, toggle the LED state.
5. Continue executing the loop.
6. Repeat the process.

---

## 7. Source Code

The main source code is available in:

`led_blink.ino`

The current implementation uses non-blocking timing with `millis()`.

---

## 8. Quality Assurance Approach

GitHub Issues are used to identify, document, track, and resolve problems
in the embedded system.

Each QA issue contains:

- Problem description
- Expected behaviour
- Actual behaviour
- Severity
- Root cause analysis
- Proposed solution
- Testing plan
- Resolution status

The project contains four QA issues covering software timing, hardware
connectivity, code responsiveness, and documentation.

---

## 9. QA Issues

### QA-001: LED blinking interval is longer than expected

**Type:** Software / Timing

**Severity:** Medium

**Problem:** The original implementation used a 1000 ms ON and OFF delay,
resulting in a complete blinking cycle of approximately 2 seconds.

**Root Cause:** The delay interval was configured to 1000 ms for both LED
states.

**Solution:** Reduced the ON and OFF delay values to 500 ms.

**Resolution:** Implemented through a dedicated GitHub branch, commit, and
Pull Request.

**Status:** Resolved

---

### QA-002: LED does not illuminate during testing

**Type:** Hardware / Connectivity

**Severity:** High

**Problem:** The LED may remain OFF because of incorrect LED polarity,
wiring, or resistor connection.

**Root Cause:** Incorrect or unclear hardware connection.

**Solution:** Added clear LED polarity, resistor, Pin 13, and GND connection
instructions to the project documentation.

**Resolution:** Documentation updated and merged through a Pull Request.

**Status:** Resolved

---

### QA-003: Blocking delay prevents responsive LED control

**Type:** Software / Performance

**Severity:** Medium

**Problem:** The original implementation used the blocking `delay()`
function.

**Root Cause:** `delay()` pauses program execution during the configured
timing period.

**Solution:** Replaced the blocking implementation with a non-blocking
`millis()`-based timing approach.

**Benefits:**

- Arduino remains responsive.
- Additional operations can execute inside `loop()`.
- LED timing is maintained without blocking execution.

**Resolution:** Implemented through a dedicated branch, commit, and
Pull Request.

**Status:** Resolved

---

### QA-004: LED pin configuration is not clearly documented

**Type:** Documentation / Maintainability

**Severity:** Low

**Problem:** The LED pin was defined in the source code but was not
initially documented clearly for users assembling the circuit.

**Root Cause:** Insufficient documentation of the relationship between the
source-code pin configuration and the physical hardware connection.

**Solution:** Added a dedicated LED Pin Configuration section identifying
Arduino digital Pin 13 and its relationship with the `LED_PIN` variable.

**Resolution:** Documentation updated through a dedicated branch and
commit.

**Status:** Resolved

---

## 10. GitHub Collaboration Workflow

The following GitHub features were used:

- Repository
- README documentation
- GitHub Issues
- Issue comments
- Labels
- Branches
- Commits
- Pull Requests
- Issue resolution

The workflow followed was:

**Issue Identification**
→ **Root Cause Analysis**
→ **Fix Branch**
→ **Code/Documentation Modification**
→ **Commit**
→ **Pull Request**
→ **Review**
→ **Merge**
→ **Issue Resolution**

This provides traceability from problem identification to final resolution.

---

## 11. Project Planning and Tracking

| Stage | Activity | Status |
|---|---|---|
| 1 | Repository creation | Completed |
| 2 | Initial LED blinking code | Completed |
| 3 | README documentation | Completed |
| 4 | QA issue identification | Completed |
| 5 | Root-cause analysis | Completed |
| 6 | QA-001 resolution | Completed |
| 7 | QA-002 resolution | Completed |
| 8 | QA-003 resolution | Completed |
| 9 | QA-004 resolution | Completed |
| 10 | Final testing and verification | Completed |
| 11 | Final documentation | Completed |

---

## 12. Testing and Verification

The project is verified through source-code review and hardware testing.

Testing activities include:

- Checking LED ON/OFF behaviour.
- Verifying the 500 ms timing interval.
- Checking LED polarity and wiring.
- Verifying the 220Ω current-limiting resistor.
- Confirming Arduino Pin 13 configuration.
- Confirming that the program no longer uses blocking `delay()`.
- Verifying that the Arduino main loop remains continuously executable.

---

## 13. Expected Outcome

The final system should provide reliable LED blinking while maintaining
proper documentation of identified problems, corrective actions, and
development history through GitHub.

The project should also demonstrate a traceable QA workflow from issue
identification through solution implementation and resolution.

---

## 14. Learning Outcome

This project demonstrates how collaborative platforms such as GitHub can
improve:

- Transparency
- Traceability
- Documentation
- Team collaboration
- Problem identification
- Root-cause analysis
- Solution tracking
- Project monitoring

GitHub provides a structured way to manage both technical development and
quality assurance activities in an embedded-system project.
