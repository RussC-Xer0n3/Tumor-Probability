<style>
/* The dropdown container */
.dropdown {
  float: left;
  overflow: hidden;
}
/* Dropdown button */
.dropdown .dropbtn {
  font-size: 16px;
  border: none;
  outline: none;
  color: white;
  padding: 14px 16px;
  background-color: inherit;
  font-family: inherit; /* Important for vertical align on mobile phones */
  margin: 0; /* Important for vertical align on mobile phones */
}
/* Add a red background color to navbar links on hover */
.navbar a:hover, .dropdown:hover .dropbtn {
    background-color: aliceblue;
    color: teal;
  }
  /* Dropdown content (hidden by default) */
.dropdown-content {
  display: none;
  position: absolute;
  background-color: teal;
  min-width: 160px;
  box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);
  z-index: 1;
}
/* Links inside the dropdown */
.dropdown-content a {
  float: none;
  color: aliceblue;
  padding: 12px 16px;
  text-decoration: none;
  display: block;
  text-align: left;
}
/* Add a grey background color to dropdown links on hover */
.dropdown-content a:hover {
  background-color: #ddd;
}
/* Show the dropdown menu on hover */
.dropdown:hover .dropdown-content {
  display: block;
}
</style>
<nav class="w3-container w3-teal w3-center w3-margin-top">
    <div class="dropdown">
        <button class="dropbtn">Projects
          <i class="fa fa-caret-down"></i>
        </button>
        <div class="dropdown-content">
          <a href="https://russc-xer0n3.github.io/NetPCaC">NetPCaC</a>
          <a href="https://russc-xer0n3.github.io/LANDROVER">LANDROVER</a>
          <a href="https://russc-xer0n3.github.io/MAC">MAC Address</a>
          <a href="https://russc-xer0n3.github.io/SCRUD">SCRUD</a>
          <a href="https://russc-xer0n3.github.io/Remove">Code Syntax Removal</a>
          <a href="https://russc-xer0n3.github.io/PassGen">PassGen</a>
          <a href="https://russc-xer0n3.github.io/C_Shapes">C Programming Shap`es</a>
          <a href="https://russc-xer0n3.github.io/Shapes---python">Python Shapes and space</a>
          <a href="https://russc-xer0n3.github.io/The-old-Fusion-Repository">Fusion?</a>
          <a href="https://russc-xer0n3.github.io/The-Russian-Wedding-Rings">The Russian Wedding Rings</a>
          <a href="https://russc-xer0n3.github.io/QBit-and-GParticulates">QBit and GParticulates</a>
          <a href="https://russc-xer0n3.github.io/Thyme-old">Thyme</a>
          <a href="https://russc-xer0n3.github.io/IP-Port">IP and Ports</a>
          <a href="https://russc-xer0n3.github.io/Xer0n3">Xer0n3</a>
          <a href="https://russc-xer0n3.github.io/ScrambledEggs">ScrambledEggs</a>
          <a href="https://russc-xer0n3.github.io/Py">Python Code</a>
        </div>
    </div>
    <br>
      <a href="https://www.facebook.com/profile.php?id=100075972987666"><i class="fa fa-facebook-official w3-hover-opacity"></i></a>
      <a href="https://www.instagram.com/russellclarke821"><i class="fa fa-instagram w3-hover-opacity"></i></a>
      <a href="https://www.pinterest.co.uk/russellclarke821/"><i class="fa fa-pinterest-p w3-hover-opacity"></i></a>
      <a href="https://twitter.com/Developing821"><i class="fa fa-twitter w3-hover-opacity"></i></a>
      <a href="https://www.linkedin.com/in/russell-clarke-09a1a5238"></a><i class="fa fa-linkedin w3-hover-opacity"></i>
      <br><a href="https://russc-xer0n3.github.io">My CV and additional information</a>
    <br>
</nav>
# Probabalistic regression determination
## Looking at programatic probability calculations

### Taking a look at the probability of regression or progression of a single malenoma / tumor of type or a large data set of multiple types

From the example set out in [Thomas Wood' example](https://deepai.org/machine-learning-glossary-and-terms/sigmoid-function/#lazyload) of logistic Sigmoid Function in Logistic Regression, the Math laid out there in probability density function seemed to be a nice start to look into probability in data sets of both singular and multiples and to give some additional practice for applied mathematics, software engineering and problem solving using probability.

Here set out we have the probability density function : 

<img data-src="https://images.deepai.org/user-content/1553445820-thumb-8570.svg" alt="probability density function operating on y variable is equal to probability density function y equals one, divided over the sum of probability density function y equals zero plus probability density function y equals one permitting a sigmoid sitribution of either positive result for progression where a clustering is in the higher range if the sigmoid function is closer to one and a probability of regression if the sigmoid cluster is closer to zero in melanomas or tumors" style="width: 193.688px;"/>

to repeat the explaination, probability density function (pdf) operating on y variable is equal to probability density function y equals one, divided over the sum of probability density function y equals zero and probability density function y equals one permitting a sigmoid sitribution of either positive result for progression where a clustering is in the higher range if the sigmoid function is closer to one and a probability of regression if the sigmoid cluster is closer to zero in melanomas or tumors.

The intital interest was of data sets from arrays or lists, so how do we process them, we could try using the Mathematical notation in a compressed code form, however, if we need to break in and out of that compressed code it becomes more difficult and more processor intensive to write more Math to print out data and behaviour.

We have to take the standardised approach and write the nested loops in a Big O notation form to process the data sets as some are multi-dimensional arrays,

### Multi-dimensional array example

```
//Historical for generic use case of type using singular use case as example
float a[3][2] = {{x, y}, {x, y}, {x, y}};
float b[3][2] = {{x, y}, {x, y}, {x, y}};
```

### Nested loops

When processing Multi-dimensional arrays or datasets, we should really process them with nested loops since we can interject at various stages in the process to get a data feed of what id happening and make comparisons of efficiency for example...
 ```
 public void float multiple_of_type(a, b) {

//where l is the probability sum
for (int q = 0; q <= (a[q][q], b[q][q]); l++) {

float D = 0.000000;
float S = 0.000000;

//for each index in a
    for (int i = 0; i <= a[i][i]; i++) {
        for (int j = 0; j <= a[i][j]; j++) {
            for (int l = 0; l <= j[l]; l++) {
                float S = (l + j) / i;
            }
        }
    }

//for each index in b
    for (int i = 0; i <= b[i][i]; i++) {
    
////<<<< print out some extra data and use TIMERS and COUNTERS for measurement >>>>////

    for (int j = 0; j <= a[i][j]; j++) {
            for (int l = 0; l <= j[l]; l++) {
                float D = (l + j) / i;    
            }
        }
    }

//calculate the probability by dividing the sum of both over each iteration of self
float U = (D + S) / q;

}

if (U < 0.500000) {
    printf("likely hood %f.6", 1 - U, "percent of regression");
} else {
    printf("likely hood %f.6", 1 - U, "percent of progression");
}

return;
}
 ```
### Summary

To summarise, the purpose of the project here was simply to look at sigmoid functions and hopefully valid methods and dataset processing to return correct results based on probabalistic processing using Melanomas as a use-case example.

<head>
    <meta content="text/html; charset=utf-8" http-equiv="Content-Type">
    <meta charset="UTF-8">
    <meta name="description" content="Projects and Portfolio">
    <meta name="keywords" content="HTML, CSS, JavaScript, PHP, MySQLi, Python, Java, C, C++, C#, Time, Shapes">
    <meta name="author" content="Russell Clarke">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css">
    <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Roboto">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
</head>
<footer class="w3-container w3-teal w3-center w3-margin-top">
  <p>Find me on social media.</p>
  <a href="https://www.facebook.com/profile.php?id=100075972987666"><i class="fa fa-facebook-official w3-hover-opacity"></i></a>
  <a href="https://www.instagram.com/russellclarke821"><i class="fa fa-instagram w3-hover-opacity"></i></a>
  <a href="https://www.pinterest.co.uk/russellclarke821/"><i class="fa fa-pinterest-p w3-hover-opacity"></i></a>
  <a href="https://twitter.com/Developing821"><i class="fa fa-twitter w3-hover-opacity"></i></a>
  <a href="https://www.linkedin.com/in/russell-clarke-09a1a5238"></a><i class="fa fa-linkedin w3-hover-opacity"></i>
  <p>Powered by <a href="https://www.w3schools.com/w3css/default.asp" target="_blank">w3.css</a></p>
</footer>
