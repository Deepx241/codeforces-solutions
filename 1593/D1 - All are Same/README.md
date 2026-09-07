<h2><a href="https://codeforces.com/contest/1593/problem/D1" target="_blank" rel="noopener noreferrer">1593D1 — All are Same</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1593D1](https://codeforces.com/contest/1593/problem/D1) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D1. All are Same</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">This problem is a simplified version of D2, but it has significant differences, so read the whole statement.</span></p><p>Polycarp has an array of $$$n$$$ ($$$n$$$ is even) integers $$$a_1, a_2, \dots, a_n$$$. Polycarp conceived of a positive integer $$$k$$$. After that, Polycarp began performing the following operations on the array: take an index $$$i$$$ ($$$1 \le i \le n$$$) and reduce the number $$$a_i$$$ by $$$k$$$.</p><p>After Polycarp performed some (possibly zero) number of such operations, it turned out that <span class="tex-font-style-bf">all</span> numbers in the array became the same. Find the maximum $$$k$$$ at which such a situation is possible, or print $$$-1$$$ if such a number can be arbitrarily large.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>Each test case consists of two lines. The first line contains an even integer $$$n$$$ ($$$4 \le n \le 40$$$) ($$$n$$$ is even). The second line contains $$$n$$$ integers $$$a_1, a_2, \dots a_n$$$ ($$$-10^6 \le a_i \le 10^6$$$).</p><p>It is guaranteed that the sum of all $$$n$$$ specified in the given test cases does not exceed $$$100$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output on a separate line an integer $$$k$$$ ($$$k \ge 1$$$) — the maximum possible number that Polycarp used in operations on the array, or $$$-1$$$, if such a number can be arbitrarily large.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002078547486726875" id="id004754106115944966" class="input-output-copier">Copy</div></div><pre id="id002078547486726875">3
6
1 5 3 1 1 5
8
-1 0 1 -1 0 1 -1 0
4
100 -1000 -1000 -1000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0031224893707137413" id="id0020593017840019578" class="input-output-copier">Copy</div></div><pre id="id0031224893707137413">2
1
1100
</pre></div></div></div>