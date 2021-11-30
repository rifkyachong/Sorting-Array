# Sorting-Array

<h3>BACKGROUND</h3>
<p>After learning about data structures and algorithms, the owner of this self-project became aware of the time-complexity and a new way to create a more efficient code. For example, the sorting array. I used to think that the computational procedure to create an array sorting function is to find the minimum number within the array, and then move it to the lowest index of the unsorted part of the array. But, this algorithm creates a Big-O time complexity of n squared which is bad. The sorting array in this project has a Big-O time complexity of n log(n), which is way better than the previous one. </p>
<h3>GOAL</h3>
<p>This is the project about creating the function/procedure to sort a given array. The goal of this project is:</p>
<ol>
  <li>To create a two array sorting function/procedure (sorting proc with n log(n) complexity, sorting proc with n^2)</li>
  <li>To compare the duration of both of the function/procedure to run, plus std::sort() built-in function (#include )</li>
</ol>
<h3>RESULT</h3>
<p>Mysortarraynlogn (sorting array function/procedure with apparently n log(n) time complexity) is already in the source c++ code. Mysortarratnn (sorting array function/procedure with apparently n^n log(n) time complexity) is already in the source c++ code. </p> 
<p>Duration (length of the array = 100000):</p>
<ul>
  <li>Mysortarraynlogn : 21 s</li>
  <li>Mysortarraynn : 12 s</li>
  <li>std::sort() : <0.1s</li>
</ul>
<h3>CONCLUSION</h3>
The duration result doesn't show time complexity pattern, and the std::sort() built-in function is way faster than mysortarray function. There is a several possible reasons:
<ol>
  <li>the length of the array is not big enough to be considered "worst case scenario"</li>
  <li>the sorting code still not efficient because the owner of this self-project doesn't know already about how things work within c++.</li>
</ol>
<p>The second reason is the most possible reason because the built-in function shows it's far more efficient code.</p>
<h3>MYPLAN</h3>
<p>LEARN LEARN LEARN!!!</p>
