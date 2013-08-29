fliptable
=========

A terminal command for flipping tables, written in C

The inspiration to write this came from a [tweet] [1] that had code to paste into your terminal. It would register a function called fliptable which would output a little emote of a person flipping a table, but it wouldn't persist if I quite out of my terminal program.

So since I'm [learning C] [2], and I wanted to be able to flip tables in my terminal at any time, I wrote this small C program.

Installation
------------

Installation is pretty simple, first use your terminal app to navigate to the fliptable source directory and either

* Install to /usr/local/bin/ by typing <code>make install</code>
* or Install to /&lt;dir&gt;/usr/local/bin/ by typing <code>make install DESTDIR=/&lt;dir&gt;</code>

Usage
-----

Using fliptable is very simple. Just type the following in your terminal app and view the table flip (command starts after ~$):
<pre>
	~$ filptable
	（╯°□°）╯ ┻━┻
</pre>

_Note: if you installed fliptable to a custom directory (the second install example), you may have to add that path to your .bashrc or .bash_profile file._

Uninstallation
--------------

Follow the same instruction under <strong>Installation</strong>, except replace <code>install</code> with <code> uninstall</code>

Include in Other Projects
-------------------------

If you'd like to use the fliptable output string (<code>（╯°□°）╯ ┻━┻</code>) in your projects, I provide a function called <code>get_fliptable</code> which returns a copy of the fliptable string. <strong>Just remember to free the memory used by the filptable string you get from <code>get_fliptable</code></strong>

  [1]: https://twitter.com/climagic/status/370595711483514880
  [2]: http://c.learncodethehardway.org/	"Learn C The Hard Way"
