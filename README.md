# codechef-500-1000-basic-programming-exercises

# CodeChef Problems (500–1000) — Beginner Friendly

> **Purpose / উদ্দেশ্য**
> This repository is dedicated to helping beginner programmers (১ম বর্ষ/নবীনদের) practice problem solving by working through CodeChef problems in the **500–1000 difficulty** range. Problems are grouped into **100-point buckets** (e.g., 500–600) and **each bucket contains 5 problems** (or grouped in batches of 5). Other buckets follow the same folder structure.
>
> এই রিপোজিটরিটি নবীন প্রোগ্রামারদের জন্য — যাতে তারা সহজে If-Else, Loops, Arrays, Basic Math ইত্যাদি নিয়ে প্র্যাকটিস করতে পারে। সমস্যাগুলোকে ১০০ রেটিং রেঞ্জ অনুযায়ী গ্রুপ করা আছে (যেমন 500–600) এবং প্রতিটি গ্রুপে ৫টা করে সমস্যা আছে। অন্য গ্রুপগুলোও একই প্যাটার্ন অনুসরণ করবে।

---

## 📁 Top-level Structure (example)

```text
codeChef-500-1000/            # Root folder for 500-1000 problems
├─ 500-600/                   # Bucket: difficulty 500–600 (5 problems per subfolder)
│  ├─ 500greaterAverage/
│  │  ├─ README.md            # short summary, link, approach (template below)
│  │  ├─ solution.cpp
│  │  ├─ solution.py
│  │  └─ sample_input.txt
│  ├─ 504Subscriptions/
│  │  └─ ...
│  ├─ 513JanmanshAndAssignments/
│  ├─ 519Exams/
│  └─ 532ChefsInHisOffice/
│
├─ 601-700/                   # Next bucket (same pattern)
│  └─ ...
│
├─ CONTRIBUTING.md
├─ CODE_OF_CONDUCT.md
├─ LICENSE
└─ README.md (this file)
```

> **Note:** `README.md` inside each problem folder **must not** copy the full official problem statement. Instead include the official link + short summary in your own words (safe and respectful of copyrights).

---

## ✅ What this README contains (quick summary)

* Repo purpose (অবশ্যই বুঝবে যে কিসের জন্য)
* Folder & naming conventions (Consistency ✅)
* How to run solutions locally (compile/run commands)
* Per-problem README template (Bengali + English)
* Step-by-step contributor checklist (how to add new problems)
* Commit message & PR guideline, topics/tags, license

---

## ✨ Naming & File Conventions (Important)

* **Folder for bucket:** `500-600/`, `601-700/`, ...
* **Problem folder:** `<problem-id><short-title>/` — spaces → hyphen, lowercase preferable. Example: `500greaterAverage/`
* **Files inside problem folder:**

  * `README.md` — short summary, link, approach, complexity, sample I/O
  * `solution.cpp` or `solution.py` or `solution.js` — your code
  * `sample_input.txt` (optional) — sample input to test locally
* **Solution filenames:** `solution.<ext>` or `main.<ext>` (pick one style and stay consistent)

---

## 📌 Per-Problem README Template (copy this into each problem's README.md)

### English (short, safe & student-friendly)

```
# <Platform> — <Problem ID> <Short Title>

🔗 Official Link: <paste-official-problem-link-here>

## Summary
- Difficulty: <e.g. 500>
- Topic: <if-else, loops, arrays, math>

## Short Description (in your own words)
A one- or two-line summary describing the task (do **not** paste the official problem statement).

## Approach (step-by-step)
1. Step 1
2. Step 2
3. Edge cases

## Complexity
- Time: O(...)
- Space: O(...)

## Files
- `solution.cpp` — C++ solution
- `solution.py` — Python solution (optional)

## Sample I/O
**Input**
```

<sample input>
```
**Output**
```
<sample output>
```

## Notes

* Any tips, pitfalls, or small explanation in your own words.

```

### বাংলা (ছোট ও সহজভাবে)
```

# <Platform> — <Problem ID> <ছোট নাম>

🔗 অফিসিয়াল লিংক: <official-link>

## সারসংক্ষেপ

* Difficulty: \<e.g. 500>
* Topic: \<if-else, loop, array>

## সমস্যা সংক্ষেপে (নিজের ভাষায়)

খুব সংক্ষেপে বলো সমস্যা কী — অফিসিয়াল টেক্সট কপি কোরো না।

## সমাধান ধারণা (ধাপে ধাপে)

1. ধাপ ১
2. ধাপ ২
3. Edge cases

## জটিলতা

* Time: O(...)
* Space: O(...)

## ফাইল

* `solution.cpp` — C++ সমাধান

## Sample I/O

Input:

```
<sample input>
```

Output:

```
<sample output>
```

## নোট

* ছোট টিপস বা কনসার্ন।

````

---

## 🛠️ How to run solutions locally (common commands)
### C++
```bash
# Compile
g++ solution.cpp -std=c++17 -O2 -o solution
# Run
./solution < sample_input.txt
````

### Python

```bash
python3 solution.py < sample_input.txt
```

### Node.js

```bash
node solution.js < sample_input.txt
```

---

## 🧭 Add a New Problem — Step-by-step Checklist (for contributors / নিজের জন্য)

1. **Create folder** under the correct bucket: `codeChef-500-1000/500-600/<id>_<short-title>/`.
2. **Create `README.md`** using the per-problem template above. **Include official link** and a short summary in your words.
3. **Add solution file(s)**: `solution.cpp` (and/or `solution.py`, `solution.js`).
4. **Add sample\_input.txt** with at least one test case (optional but helpful).
5. **Run & verify** locally using the commands above.
6. **Write complexity** and any notes in `README.md`.
7. **Commit** with a clear message: `feat(codechef:500): add 500greaterAverage solution (cpp)`.
8. **Open a Pull Request** describing what you added and which bucket it belongs to.

> Maintainers: Review PRs for correctness, code style, and duplication before merging.

---

## 📋 Commit message & PR guideline

* **Commit message format (example):**

  * `feat(codechef:504): add subscriptions solution (cpp)`
  * `fix(codechef:519): correct edge-case in python solution`
* **PR description should include:**

  * What you added (files)
  * Problem link
  * Short explanation of approach
  * How to test locally

---

## ⚖️ Do's and Don'ts (copyright-safe)

* ✅ **Do** include the official problem link.
* ✅ **Do** write a short summary in your own words.
* ✅ **Do** include your solution code and sample I/O.
* ❌ **Don't** paste the whole official problem statement word-for-word.
* ❌ **Don't** paste editorial/solution text from the official site — explain in your words.

---

## 🧰 Recommended repository files

* `CONTRIBUTING.md` — contribution rules & checklist (use the checklist above)
* `CODE_OF_CONDUCT.md` — respectful community guidelines
* `LICENSE` — e.g., MIT (or Unlicense for learning resources)
* `.gitignore` — compiled files, binaries

---

## 🏷️ GitHub Topics & Badges (suggested)

Topics: `programming-problems`, `codechef`, `beginners`, `if-else`, `loops`, `arrays`, `c++`, `python`
Badges: `PRs-welcome`, `license-MIT`, `good-first-issue` (add as you like)

---

## 📞 Contact / Maintainers

* Maintainer: \<Your Name / GitHub handle>
* Email: <optional>
* If you want, put a `MAINTAINERS.md` with contacts for faster review.

---

## 👍 Goal & Vision (short)

* Help beginners build confidence by practicing grouped, bite-sized problems.
* Encourage open contributions while staying copyright-safe.

---

**If you want, I can:**

* generate `CONTRIBUTING.md` and `PR template` for you, or
* create the `README.md` inside one example problem folder (e.g., `500greaterAverage`) using the per-problem template, so you can copy it to the rest.

আবশ্যই বলো কোনটা আগে করবো — CONTRIBUTING.md, PR template, না কি একটি example problem README তৈরি করে দেব?"
