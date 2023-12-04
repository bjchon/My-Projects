// modules are defined as an array
// [ module function, map of requires ]
//
// map of requires is short require name -> numeric require
//
// anything defined in a previous bundle is accessed via the
// orig method which is the require for previous bundles
parcelRequire = (function (modules, cache, entry, globalName) {
  // Save the require from previous bundle to this closure if any
  var previousRequire = typeof parcelRequire === 'function' && parcelRequire;
  var nodeRequire = typeof require === 'function' && require;

  function newRequire(name, jumped) {
    if (!cache[name]) {
      if (!modules[name]) {
        // if we cannot find the module within our internal map or
        // cache jump to the current global require ie. the last bundle
        // that was added to the page.
        var currentRequire = typeof parcelRequire === 'function' && parcelRequire;
        if (!jumped && currentRequire) {
          return currentRequire(name, true);
        }

        // If there are other bundles on this page the require from the
        // previous one is saved to 'previousRequire'. Repeat this as
        // many times as there are bundles until the module is found or
        // we exhaust the require chain.
        if (previousRequire) {
          return previousRequire(name, true);
        }

        // Try the node require function if it exists.
        if (nodeRequire && typeof name === 'string') {
          return nodeRequire(name);
        }

        var err = new Error('Cannot find module \'' + name + '\'');
        err.code = 'MODULE_NOT_FOUND';
        throw err;
      }

      localRequire.resolve = resolve;
      localRequire.cache = {};

      var module = cache[name] = new newRequire.Module(name);

      modules[name][0].call(module.exports, localRequire, module, module.exports, this);
    }

    return cache[name].exports;

    function localRequire(x){
      return newRequire(localRequire.resolve(x));
    }

    function resolve(x){
      return modules[name][1][x] || x;
    }
  }

  function Module(moduleName) {
    this.id = moduleName;
    this.bundle = newRequire;
    this.exports = {};
  }

  newRequire.isParcelRequire = true;
  newRequire.Module = Module;
  newRequire.modules = modules;
  newRequire.cache = cache;
  newRequire.parent = previousRequire;
  newRequire.register = function (id, exports) {
    modules[id] = [function (require, module) {
      module.exports = exports;
    }, {}];
  };

  var error;
  for (var i = 0; i < entry.length; i++) {
    try {
      newRequire(entry[i]);
    } catch (e) {
      // Save first error but execute all entries
      if (!error) {
        error = e;
      }
    }
  }

  if (entry.length) {
    // Expose entry point to Node, AMD or browser globals
    // Based on https://github.com/ForbesLindesay/umd/blob/master/template.js
    var mainExports = newRequire(entry[entry.length - 1]);

    // CommonJS
    if (typeof exports === "object" && typeof module !== "undefined") {
      module.exports = mainExports;

    // RequireJS
    } else if (typeof define === "function" && define.amd) {
     define(function () {
       return mainExports;
     });

    // <script>
    } else if (globalName) {
      this[globalName] = mainExports;
    }
  }

  // Override the current require with this new one
  parcelRequire = newRequire;

  if (error) {
    // throw error from earlier, _after updating parcelRequire_
    throw error;
  }

  return newRequire;
})({"parcel-experiment.ca12e178.js":[function(require,module,exports) {
function _typeof(o) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (o) { return typeof o; } : function (o) { return o && "function" == typeof Symbol && o.constructor === Symbol && o !== Symbol.prototype ? "symbol" : typeof o; }, _typeof(o); }
(function () {
  function B(o) {
    return (B = "function" == typeof Symbol && "symbol" == _typeof(Symbol.iterator) ? function (o) {
      return _typeof(o);
    } : function (o) {
      return o && "function" == typeof Symbol && o.constructor === Symbol && o !== Symbol.prototype ? "symbol" : _typeof(o);
    })(o);
  }
  var C = B;
  function b(e) {
    h(1, arguments);
    var t = Object.prototype.toString.call(e);
    return e instanceof Date || "object" === C(e) && "[object Date]" === t ? new Date(e.getTime()) : "number" == typeof e || "[object Number]" === t ? new Date(e) : ("string" != typeof e && "[object String]" !== t || "undefined" == typeof console || (console.warn("Starting with v2.0.0-beta.1 date-fns doesn't accept strings as date arguments. Please use `parseISO` to parse strings. See: https://github.com/date-fns/date-fns/blob/master/docs/upgradeGuide.md#string-arguments"), console.warn(new Error().stack)), new Date(NaN));
  }
  function h(e, t) {
    if (t.length < e) throw new TypeError(e + " argument" + (e > 1 ? "s" : "") + " required, but only " + t.length + " present");
  }
  var E = {};
  function F() {
    return E;
  }
  function x(e) {
    var t = new Date(Date.UTC(e.getFullYear(), e.getMonth(), e.getDate(), e.getHours(), e.getMinutes(), e.getSeconds(), e.getMilliseconds()));
    return t.setUTCFullYear(e.getFullYear()), e.getTime() - t.getTime();
  }
  function q(e, r) {
    h(2, arguments);
    var $ = b(e),
      t = b(r),
      g = $.getTime() - t.getTime();
    return g < 0 ? -1 : g > 0 ? 1 : g;
  }
  function G(e, r) {
    h(2, arguments);
    var t = b(e),
      $ = b(r);
    return 12 * (t.getFullYear() - $.getFullYear()) + (t.getMonth() - $.getMonth());
  }
  function H(e, $) {
    return h(2, arguments), b(e).getTime() - b($).getTime();
  }
  var y = {
      ceil: Math.ceil,
      round: Math.round,
      floor: Math.floor,
      trunc: function trunc(o) {
        return o < 0 ? Math.ceil(o) : Math.floor(o);
      }
    },
    I = "trunc";
  function J(o) {
    return o ? y[o] : y[I];
  }
  function K(e, r) {
    h(2, arguments);
    var $,
      t = b(e),
      a = b(r),
      u = q(t, a),
      l = Math.abs(G(t, a));
    if (l < 1) $ = 0;else {
      1 === t.getMonth() && t.getDate() > 27 && t.setDate(30), t.setMonth(t.getMonth() - u * l);
      var o = q(t, a) === -u;
      L(b(e)) && 1 === l && 1 === q(e, a) && (o = !1), $ = u * (l - Number(o));
    }
    return 0 === $ ? 0 : $;
  }
  function L(e) {
    h(1, arguments);
    var r = b(e);
    return N(r).getTime() === O(r).getTime();
  }
  function N(e) {
    h(1, arguments);
    var r = b(e);
    return r.setHours(23, 59, 59, 999), r;
  }
  function O(e) {
    h(1, arguments);
    var r = b(e),
      t = r.getMonth();
    return r.setFullYear(r.getFullYear(), t + 1, 0), r.setHours(23, 59, 59, 999), r;
  }
  function P(e, r, $) {
    h(2, arguments);
    var i = H(e, r) / 1e3;
    return J(null == $ ? void 0 : $.roundingMethod)(i);
  }
  var Q = {
      lessThanXSeconds: {
        one: "less than a second",
        other: "less than {{count}} seconds"
      },
      xSeconds: {
        one: "1 second",
        other: "{{count}} seconds"
      },
      halfAMinute: "half a minute",
      lessThanXMinutes: {
        one: "less than a minute",
        other: "less than {{count}} minutes"
      },
      xMinutes: {
        one: "1 minute",
        other: "{{count}} minutes"
      },
      aboutXHours: {
        one: "about 1 hour",
        other: "about {{count}} hours"
      },
      xHours: {
        one: "1 hour",
        other: "{{count}} hours"
      },
      xDays: {
        one: "1 day",
        other: "{{count}} days"
      },
      aboutXWeeks: {
        one: "about 1 week",
        other: "about {{count}} weeks"
      },
      xWeeks: {
        one: "1 week",
        other: "{{count}} weeks"
      },
      aboutXMonths: {
        one: "about 1 month",
        other: "about {{count}} months"
      },
      xMonths: {
        one: "1 month",
        other: "{{count}} months"
      },
      aboutXYears: {
        one: "about 1 year",
        other: "about {{count}} years"
      },
      xYears: {
        one: "1 year",
        other: "{{count}} years"
      },
      overXYears: {
        one: "over 1 year",
        other: "over {{count}} years"
      },
      almostXYears: {
        one: "almost 1 year",
        other: "almost {{count}} years"
      }
    },
    R = function R(o, e, t) {
      var n,
        a = Q[o];
      return n = "string" == typeof a ? a : 1 === e ? a.one : a.other.replace("{{count}}", e.toString()), null != t && t.addSuffix ? t.comparison && t.comparison > 0 ? "in " + n : n + " ago" : n;
    };
  function v(t) {
    return function () {
      var r = arguments.length > 0 && void 0 !== arguments[0] ? arguments[0] : {},
        e = r.width ? String(r.width) : t.defaultWidth;
      return t.formats[e] || t.formats[t.defaultWidth];
    };
  }
  var S = {
      full: "EEEE, MMMM do, y",
      long: "MMMM do, y",
      medium: "MMM d, y",
      short: "MM/dd/yyyy"
    },
    T = {
      full: "h:mm:ss a zzzz",
      long: "h:mm:ss a z",
      medium: "h:mm:ss a",
      short: "h:mm a"
    },
    U = {
      full: "{{date}} 'at' {{time}}",
      long: "{{date}} 'at' {{time}}",
      medium: "{{date}}, {{time}}",
      short: "{{date}}, {{time}}"
    },
    W = {
      date: v({
        formats: S,
        defaultWidth: "full"
      }),
      time: v({
        formats: T,
        defaultWidth: "full"
      }),
      dateTime: v({
        formats: U,
        defaultWidth: "full"
      })
    };
  var X = {
      lastWeek: "'last' eeee 'at' p",
      yesterday: "'yesterday at' p",
      today: "'today at' p",
      tomorrow: "'tomorrow at' p",
      nextWeek: "eeee 'at' p",
      other: "P"
    },
    Y = function Y(e, t, a, o) {
      return X[e];
    };
  function j(t) {
    return function (a, l) {
      var e;
      if ("formatting" === (null != l && l.context ? String(l.context) : "standalone") && t.formattingValues) {
        var n = t.defaultFormattingWidth || t.defaultWidth,
          r = null != l && l.width ? String(l.width) : n;
        e = t.formattingValues[r] || t.formattingValues[n];
      } else {
        var u = t.defaultWidth,
          i = null != l && l.width ? String(l.width) : t.defaultWidth;
        e = t.values[i] || t.values[u];
      }
      return e[t.argumentCallback ? t.argumentCallback(a) : a];
    };
  }
  var Z = {
      narrow: ["B", "A"],
      abbreviated: ["BC", "AD"],
      wide: ["Before Christ", "Anno Domini"]
    },
    aa = {
      narrow: ["1", "2", "3", "4"],
      abbreviated: ["Q1", "Q2", "Q3", "Q4"],
      wide: ["1st quarter", "2nd quarter", "3rd quarter", "4th quarter"]
    },
    ba = {
      narrow: ["J", "F", "M", "A", "M", "J", "J", "A", "S", "O", "N", "D"],
      abbreviated: ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"],
      wide: ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
    },
    ca = {
      narrow: ["S", "M", "T", "W", "T", "F", "S"],
      short: ["Su", "Mo", "Tu", "We", "Th", "Fr", "Sa"],
      abbreviated: ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"],
      wide: ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]
    },
    da = {
      narrow: {
        am: "a",
        pm: "p",
        midnight: "mi",
        noon: "n",
        morning: "morning",
        afternoon: "afternoon",
        evening: "evening",
        night: "night"
      },
      abbreviated: {
        am: "AM",
        pm: "PM",
        midnight: "midnight",
        noon: "noon",
        morning: "morning",
        afternoon: "afternoon",
        evening: "evening",
        night: "night"
      },
      wide: {
        am: "a.m.",
        pm: "p.m.",
        midnight: "midnight",
        noon: "noon",
        morning: "morning",
        afternoon: "afternoon",
        evening: "evening",
        night: "night"
      }
    },
    ea = {
      narrow: {
        am: "a",
        pm: "p",
        midnight: "mi",
        noon: "n",
        morning: "in the morning",
        afternoon: "in the afternoon",
        evening: "in the evening",
        night: "at night"
      },
      abbreviated: {
        am: "AM",
        pm: "PM",
        midnight: "midnight",
        noon: "noon",
        morning: "in the morning",
        afternoon: "in the afternoon",
        evening: "in the evening",
        night: "at night"
      },
      wide: {
        am: "a.m.",
        pm: "p.m.",
        midnight: "midnight",
        noon: "noon",
        morning: "in the morning",
        afternoon: "in the afternoon",
        evening: "in the evening",
        night: "at night"
      }
    },
    fa = function fa(n, e) {
      var a = Number(n),
        r = a % 100;
      if (r > 20 || r < 10) switch (r % 10) {
        case 1:
          return a + "st";
        case 2:
          return a + "nd";
        case 3:
          return a + "rd";
      }
      return a + "th";
    },
    ga = {
      ordinalNumber: fa,
      era: j({
        values: Z,
        defaultWidth: "wide"
      }),
      quarter: j({
        values: aa,
        defaultWidth: "wide",
        argumentCallback: function argumentCallback(n) {
          return n - 1;
        }
      }),
      month: j({
        values: ba,
        defaultWidth: "wide"
      }),
      day: j({
        values: ca,
        defaultWidth: "wide"
      }),
      dayPeriod: j({
        values: da,
        defaultWidth: "wide",
        formattingValues: ea,
        defaultFormattingWidth: "wide"
      })
    };
  function k(t) {
    return function (r) {
      var a = arguments.length > 1 && void 0 !== arguments[1] ? arguments[1] : {},
        e = a.width,
        n = e && t.matchPatterns[e] || t.matchPatterns[t.defaultMatchWidth],
        u = r.match(n);
      if (!u) return null;
      var l,
        $ = u[0],
        f = e && t.parsePatterns[e] || t.parsePatterns[t.defaultParseWidth],
        i = Array.isArray(f) ? ia(f, function (t) {
          return t.test($);
        }) : ha(f, function (t) {
          return t.test($);
        });
      return l = t.valueCallback ? t.valueCallback(i) : i, {
        value: l = a.valueCallback ? a.valueCallback(l) : l,
        rest: r.slice($.length)
      };
    };
  }
  function ha(t, r) {
    for (var a in t) if (t.hasOwnProperty(a) && r(t[a])) return a;
  }
  function ia(t, r) {
    for (var a = 0; a < t.length; a++) if (r(t[a])) return a;
  }
  function ja(a) {
    return function (r) {
      var e = arguments.length > 1 && void 0 !== arguments[1] ? arguments[1] : {},
        l = r.match(a.matchPattern);
      if (!l) return null;
      var t = l[0],
        u = r.match(a.parsePattern);
      if (!u) return null;
      var n = a.valueCallback ? a.valueCallback(u[0]) : u[0];
      return {
        value: n = e.valueCallback ? e.valueCallback(n) : n,
        rest: r.slice(t.length)
      };
    };
  }
  var ka = /^(\d+)(th|st|nd|rd)?/i,
    la = /\d+/i,
    ma = {
      narrow: /^(b|a)/i,
      abbreviated: /^(b\.?\s?c\.?|b\.?\s?c\.?\s?e\.?|a\.?\s?d\.?|c\.?\s?e\.?)/i,
      wide: /^(before christ|before common era|anno domini|common era)/i
    },
    na = {
      any: [/^b/i, /^(a|c)/i]
    },
    oa = {
      narrow: /^[1234]/i,
      abbreviated: /^q[1234]/i,
      wide: /^[1234](th|st|nd|rd)? quarter/i
    },
    pa = {
      any: [/1/i, /2/i, /3/i, /4/i]
    },
    qa = {
      narrow: /^[jfmasond]/i,
      abbreviated: /^(jan|feb|mar|apr|may|jun|jul|aug|sep|oct|nov|dec)/i,
      wide: /^(january|february|march|april|may|june|july|august|september|october|november|december)/i
    },
    ra = {
      narrow: [/^j/i, /^f/i, /^m/i, /^a/i, /^m/i, /^j/i, /^j/i, /^a/i, /^s/i, /^o/i, /^n/i, /^d/i],
      any: [/^ja/i, /^f/i, /^mar/i, /^ap/i, /^may/i, /^jun/i, /^jul/i, /^au/i, /^s/i, /^o/i, /^n/i, /^d/i]
    },
    sa = {
      narrow: /^[smtwf]/i,
      short: /^(su|mo|tu|we|th|fr|sa)/i,
      abbreviated: /^(sun|mon|tue|wed|thu|fri|sat)/i,
      wide: /^(sunday|monday|tuesday|wednesday|thursday|friday|saturday)/i
    },
    ta = {
      narrow: [/^s/i, /^m/i, /^t/i, /^w/i, /^t/i, /^f/i, /^s/i],
      any: [/^su/i, /^m/i, /^tu/i, /^w/i, /^th/i, /^f/i, /^sa/i]
    },
    ua = {
      narrow: /^(a|p|mi|n|(in the|at) (morning|afternoon|evening|night))/i,
      any: /^([ap]\.?\s?m\.?|midnight|noon|(in the|at) (morning|afternoon|evening|night))/i
    },
    va = {
      any: {
        am: /^a/i,
        pm: /^p/i,
        midnight: /^mi/i,
        noon: /^no/i,
        morning: /morning/i,
        afternoon: /afternoon/i,
        evening: /evening/i,
        night: /night/i
      }
    },
    wa = {
      ordinalNumber: ja({
        matchPattern: ka,
        parsePattern: la,
        valueCallback: function valueCallback(a) {
          return parseInt(a, 10);
        }
      }),
      era: k({
        matchPatterns: ma,
        defaultMatchWidth: "wide",
        parsePatterns: na,
        defaultParseWidth: "any"
      }),
      quarter: k({
        matchPatterns: oa,
        defaultMatchWidth: "wide",
        parsePatterns: pa,
        defaultParseWidth: "any",
        valueCallback: function valueCallback(a) {
          return a + 1;
        }
      }),
      month: k({
        matchPatterns: qa,
        defaultMatchWidth: "wide",
        parsePatterns: ra,
        defaultParseWidth: "any"
      }),
      day: k({
        matchPatterns: sa,
        defaultMatchWidth: "wide",
        parsePatterns: ta,
        defaultParseWidth: "any"
      }),
      dayPeriod: k({
        matchPatterns: ua,
        defaultMatchWidth: "any",
        parsePatterns: va,
        defaultParseWidth: "any"
      })
    };
  var xa = {
    code: "en-US",
    formatDistance: R,
    formatLong: W,
    formatRelative: Y,
    localize: ga,
    match: wa,
    options: {
      weekStartsOn: 0,
      firstWeekContainsDate: 1
    }
  };
  function ya(t) {
    return z({}, t);
  }
  function z(r, e) {
    if (null == r) throw new TypeError("assign requires that input parameter not be null or undefined");
    for (var t in e) Object.prototype.hasOwnProperty.call(e, t) && (r[t] = e[t]);
    return r;
  }
  var A = 1440,
    za = 2520,
    w = 43200,
    Aa = 86400;
  function Ba(e, r, o) {
    var s, a;
    h(2, arguments);
    var t = F(),
      i = null !== (s = null !== (a = null == o ? void 0 : o.locale) && void 0 !== a ? a : t.locale) && void 0 !== s ? s : xa;
    if (!i.formatDistance) throw new RangeError("locale must contain formatDistance property");
    var n = q(e, r);
    if (isNaN(n)) throw new RangeError("Invalid time value");
    var $,
      c,
      l = z(ya(o), {
        addSuffix: Boolean(null == o ? void 0 : o.addSuffix),
        comparison: n
      });
    n > 0 ? ($ = b(r), c = b(e)) : ($ = b(e), c = b(r));
    var f,
      u = P(c, $),
      d = (x(c) - x($)) / 1e3,
      m = Math.round((u - d) / 60);
    if (m < 2) return null != o && o.includeSeconds ? u < 5 ? i.formatDistance("lessThanXSeconds", 5, l) : u < 10 ? i.formatDistance("lessThanXSeconds", 10, l) : u < 20 ? i.formatDistance("lessThanXSeconds", 20, l) : u < 40 ? i.formatDistance("halfAMinute", 0, l) : u < 60 ? i.formatDistance("lessThanXMinutes", 1, l) : i.formatDistance("xMinutes", 1, l) : 0 === m ? i.formatDistance("lessThanXMinutes", 1, l) : i.formatDistance("xMinutes", m, l);
    if (m < 45) return i.formatDistance("xMinutes", m, l);
    if (m < 90) return i.formatDistance("aboutXHours", 1, l);
    if (m < A) {
      var V = Math.round(m / 60);
      return i.formatDistance("aboutXHours", V, l);
    }
    if (m < za) return i.formatDistance("xDays", 1, l);
    if (m < w) {
      var M = Math.round(m / A);
      return i.formatDistance("xDays", M, l);
    }
    if (m < Aa) return f = Math.round(m / w), i.formatDistance("aboutXMonths", f, l);
    if ((f = K(c, $)) < 12) {
      var p = Math.round(m / w);
      return i.formatDistance("xMonths", p, l);
    }
    var _ = f % 12,
      D = Math.floor(f / 12);
    return _ < 3 ? i.formatDistance("aboutXYears", D, l) : _ < 9 ? i.formatDistance("overXYears", D, l) : i.formatDistance("almostXYears", D + 1, l);
  }
  function Ca(e, r) {
    return h(1, arguments), Ba(e, Date.now(), r);
  }
  var Da = "1996-09-13 10:00:00";
  document.body.textContent = "".concat(Ca(new Date(Da)), " ago");
})();
},{}],"../node_modules/parcel-bundler/src/builtins/hmr-runtime.js":[function(require,module,exports) {
var global = arguments[3];
var OVERLAY_ID = '__parcel__error__overlay__';
var OldModule = module.bundle.Module;
function Module(moduleName) {
  OldModule.call(this, moduleName);
  this.hot = {
    data: module.bundle.hotData,
    _acceptCallbacks: [],
    _disposeCallbacks: [],
    accept: function (fn) {
      this._acceptCallbacks.push(fn || function () {});
    },
    dispose: function (fn) {
      this._disposeCallbacks.push(fn);
    }
  };
  module.bundle.hotData = null;
}
module.bundle.Module = Module;
var checkedAssets, assetsToAccept;
var parent = module.bundle.parent;
if ((!parent || !parent.isParcelRequire) && typeof WebSocket !== 'undefined') {
  var hostname = "" || location.hostname;
  var protocol = location.protocol === 'https:' ? 'wss' : 'ws';
  var ws = new WebSocket(protocol + '://' + hostname + ':' + "56270" + '/');
  ws.onmessage = function (event) {
    checkedAssets = {};
    assetsToAccept = [];
    var data = JSON.parse(event.data);
    if (data.type === 'update') {
      var handled = false;
      data.assets.forEach(function (asset) {
        if (!asset.isNew) {
          var didAccept = hmrAcceptCheck(global.parcelRequire, asset.id);
          if (didAccept) {
            handled = true;
          }
        }
      });

      // Enable HMR for CSS by default.
      handled = handled || data.assets.every(function (asset) {
        return asset.type === 'css' && asset.generated.js;
      });
      if (handled) {
        console.clear();
        data.assets.forEach(function (asset) {
          hmrApply(global.parcelRequire, asset);
        });
        assetsToAccept.forEach(function (v) {
          hmrAcceptRun(v[0], v[1]);
        });
      } else if (location.reload) {
        // `location` global exists in a web worker context but lacks `.reload()` function.
        location.reload();
      }
    }
    if (data.type === 'reload') {
      ws.close();
      ws.onclose = function () {
        location.reload();
      };
    }
    if (data.type === 'error-resolved') {
      console.log('[parcel] ✨ Error resolved');
      removeErrorOverlay();
    }
    if (data.type === 'error') {
      console.error('[parcel] 🚨  ' + data.error.message + '\n' + data.error.stack);
      removeErrorOverlay();
      var overlay = createErrorOverlay(data);
      document.body.appendChild(overlay);
    }
  };
}
function removeErrorOverlay() {
  var overlay = document.getElementById(OVERLAY_ID);
  if (overlay) {
    overlay.remove();
  }
}
function createErrorOverlay(data) {
  var overlay = document.createElement('div');
  overlay.id = OVERLAY_ID;

  // html encode message and stack trace
  var message = document.createElement('div');
  var stackTrace = document.createElement('pre');
  message.innerText = data.error.message;
  stackTrace.innerText = data.error.stack;
  overlay.innerHTML = '<div style="background: black; font-size: 16px; color: white; position: fixed; height: 100%; width: 100%; top: 0px; left: 0px; padding: 30px; opacity: 0.85; font-family: Menlo, Consolas, monospace; z-index: 9999;">' + '<span style="background: red; padding: 2px 4px; border-radius: 2px;">ERROR</span>' + '<span style="top: 2px; margin-left: 5px; position: relative;">🚨</span>' + '<div style="font-size: 18px; font-weight: bold; margin-top: 20px;">' + message.innerHTML + '</div>' + '<pre>' + stackTrace.innerHTML + '</pre>' + '</div>';
  return overlay;
}
function getParents(bundle, id) {
  var modules = bundle.modules;
  if (!modules) {
    return [];
  }
  var parents = [];
  var k, d, dep;
  for (k in modules) {
    for (d in modules[k][1]) {
      dep = modules[k][1][d];
      if (dep === id || Array.isArray(dep) && dep[dep.length - 1] === id) {
        parents.push(k);
      }
    }
  }
  if (bundle.parent) {
    parents = parents.concat(getParents(bundle.parent, id));
  }
  return parents;
}
function hmrApply(bundle, asset) {
  var modules = bundle.modules;
  if (!modules) {
    return;
  }
  if (modules[asset.id] || !bundle.parent) {
    var fn = new Function('require', 'module', 'exports', asset.generated.js);
    asset.isNew = !modules[asset.id];
    modules[asset.id] = [fn, asset.deps];
  } else if (bundle.parent) {
    hmrApply(bundle.parent, asset);
  }
}
function hmrAcceptCheck(bundle, id) {
  var modules = bundle.modules;
  if (!modules) {
    return;
  }
  if (!modules[id] && bundle.parent) {
    return hmrAcceptCheck(bundle.parent, id);
  }
  if (checkedAssets[id]) {
    return;
  }
  checkedAssets[id] = true;
  var cached = bundle.cache[id];
  assetsToAccept.push([bundle, id]);
  if (cached && cached.hot && cached.hot._acceptCallbacks.length) {
    return true;
  }
  return getParents(global.parcelRequire, id).some(function (id) {
    return hmrAcceptCheck(global.parcelRequire, id);
  });
}
function hmrAcceptRun(bundle, id) {
  var cached = bundle.cache[id];
  bundle.hotData = {};
  if (cached) {
    cached.hot.data = bundle.hotData;
  }
  if (cached && cached.hot && cached.hot._disposeCallbacks.length) {
    cached.hot._disposeCallbacks.forEach(function (cb) {
      cb(bundle.hotData);
    });
  }
  delete bundle.cache[id];
  bundle(id);
  cached = bundle.cache[id];
  if (cached && cached.hot && cached.hot._acceptCallbacks.length) {
    cached.hot._acceptCallbacks.forEach(function (cb) {
      cb();
    });
    return true;
  }
}
},{}]},{},["../node_modules/parcel-bundler/src/builtins/hmr-runtime.js","parcel-experiment.ca12e178.js"], null)
//# sourceMappingURL=/parcel-experiment.ca12e178.554822fd.js.map